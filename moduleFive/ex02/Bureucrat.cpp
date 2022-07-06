#include "Bureucrat.hpp"

///////////////////
///Constructors///
//////////////////
bureucrat::bureucrat(void) {
    this->_name = "Usual Wanker Bureucrat";
    this->_grade = 150;
    std::cout << "Default Bureucrat Constructor Called" << std::endl;
}

bureucrat::bureucrat(const std::string name, int grade) {
    this->_name = name;
    if (grade < 1)
        throw gradeTooHighException();
    else if (grade > 150)
        throw gradeTooLowException();
    else 
        this->_grade = grade;
    std::cout << "Parameter Bureucrat Constructor Called, another Bureucrat has entered the world " << std::endl;
}

bureucrat::bureucrat(bureucrat const &oldBureucrat) {
    *this = oldBureucrat;
    std::cout << "Copy Constructor Called" << std::endl;
}

////////////////////
///Deconstructors///
////////////////////
bureucrat::~bureucrat(void){
    std::cout << "Local bureucrat took a header off the office roof and deconstructed" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
bureucrat &bureucrat::operator=(bureucrat const &toCopy){
    this->_grade = toCopy._grade;
    this->_name = toCopy._name;
    std::cout << "Overloading the = Operator" << std::endl;
    return(*this);
}

std::ostream &operator<<(std::ostream &stream, bureucrat const &bCrat) {
    stream << "Bureucrat: " << bCrat.getName() << " - Official Grade: " << bCrat.getGrade() << std::endl;
    std::cout << "Overloading the << Operator" << std::endl;
    return(stream);
}

/////////////
///Getters///
/////////////
int bureucrat::getGrade(void) const {
    return(this->_grade);
}

std::string bureucrat::getName(void) const {
    return(this->_name);
}

void    bureucrat::setSignGrade(int newGrade) {
    this->_grade = newGrade;
    if (newGrade < this->_grade)
        std::cout << "You're getting demoted " << this->_name << " you suck" << std::endl;
    else
        std::cout << "Congratulations " << this->_name << " you got promoted" << std::endl;
    std::cout << "New Grade Approved: " << newGrade << std::endl;
}

///////////////////////////
///Increasing/Decreasing///
///////////////////////////
void bureucrat::incrementGrade(void) {
    if (_grade == 1)
        throw cannotIncrement();
    else
        this->_grade--;
}

void bureucrat::decrementGrade(void) {
    if (_grade == 150)
        throw gradeTooLowException();
    else
        this->_grade++;
}

///////////////////////////
///Bureucratic Functions///
///////////////////////////
void bureucrat::executeForm(AForm const &form) {
    form.execute(*this);
}

///////////////////////
///Exception Methods///
///////////////////////

/////////Grade Errors upon creation
const char *bureucrat::gradeTooLowException::what(void) const throw(){
    return("Grade is too low should be between 1 & 150");
} 

const char *bureucrat::gradeTooHighException::what(void) const throw(){
    return("Grade is too high should be between 1 & 150");
} 
///////Incrementation Errors
const char *bureucrat::cannotIncrement::what(void) const throw(){
    return("Grade is already at maximum, can't increment");
} 

const char *bureucrat::cannotDecrement::what(void) const throw(){
    return("Grade is already at maximum, can't increment");
} 