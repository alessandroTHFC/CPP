#include "span.hpp"

//////////////////
///Constructors///
//////////////////
span::span(void) {
    std::cout << "Base constructor called" << std::endl;
}

span::span(int max) {
    this->_max = max;
    std::cout << "Max constructor called, we ready to take on vecNa and save Hawkins" << std::endl;
}

span::span(span const &oldSpan) {
    *this = oldSpan;
    std::cout << "Copy constructor called" << std::endl;
}

///////////////////
///Deconstructor///
///////////////////
span::~span(void) {
    std::cout << "Span deconstructed and vecNa has been destroyed." << std::endl;
}

///////////////////////
///Operator Overload///
///////////////////////
span& span::operator=(span const &toCopy) {
    this->_vecNa = toCopy._vecNa;
    this->_max = toCopy._max;
    std::cout << "Successfully overloaded = Operator" << std::endl;
    return (*this);
}

////////////////////
///Span Functions///
////////////////////
void span::addNumber(int n) {
        if (_vecNa.size() < _max)
            this->_vecNa.push_back(n);
        else
            throw maxReached();
}

void span::addLotzaNumbaz(int multiple) {
    int i = 8;
    for (unsigned int totalNums = 0; totalNums < _max; totalNums++) {
        i *= multiple;
        _vecNa.push_back(i);
    }
}

int span::shortestSpan(void) {
    if(_vecNa.size() < 2)
        throw maxAintEnuf();
    std::vector<int>::iterator it1; //iterator to first min Value
    it1 = std::min_element(_vecNa.begin(), _vecNa.end());//uses min_element to search vec for smallest, returns iterator to value
    int min1Idx = std::distance(_vecNa.begin(), it1);//use distance from start to get indx pos of value;
    int minVal1 = _vecNa[min1Idx];///set value to an integer
    std::remove(_vecNa.begin(), _vecNa.end(), minVal1);//remove that value from the vector so i can call min_element again and find the next smallest

    std::vector<int>::iterator it2;//second iterator to find new min value now that original smallest is removed
    it2 = std::min_element(_vecNa.begin(), _vecNa.end());//get new min
    int min2Idx = std::distance(_vecNa.begin(), it2);///find its index
    int minVal2 = _vecNa[min2Idx];///assign it to an int
    _vecNa.push_back(minVal1);//push back first min so its in the vector again
    
    return (minVal2 - minVal1);///minus the larger of the 2 from the other one to not get neg number
}//boom

int span::longestSpan(void) {
    if(_vecNa.size() < 2)
        throw maxAintEnuf();
    ////step1 get largest value////
    std::vector<int>::iterator    it1;
    it1 = std::max_element(_vecNa.begin(), _vecNa.end());
    int maxIndex = it1 - _vecNa.begin() + 1;
    int maxValue = _vecNa[maxIndex];

    ////Largest value found and stored in MaxValue////
    ////Now getting smallest value////
    it1 = std::min_element(_vecNa.begin(), _vecNa.end());
    int minIndex = it1 - _vecNa.begin();
    int minValue = _vecNa[minIndex];

    ///found and stored smalled value, minus the min off the max to get the largest span
    return(maxValue - minValue);
}

void span::printNums(void) {
    for (int num : _vecNa)
        std::cout << "Vector numbers: " << num << std::endl;
}

////////////////
///Exceptions///
////////////////

const char *span::maxReached::what(void) const throw(){
    return("[Error] Max is runnin up that hill and cant fit more numbers");
} 

const char *span::maxAintEnuf::what(void) const throw(){
    return("[Error] Cant get a span if Max is less than 2, raise Max, add a Dustin, Steve, Lucas or Nancy so she isnt so lonely");
} 