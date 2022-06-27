#include "Bureucrat.hpp"

///////////////////
///Constructors///
//////////////////
bureucrat::bureucrat(void) {
    this->_name = "Usual Wanker Beureucrat";
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
    std::cout << "Parameter Constructor Called" << std::endl;
}

bureucrat::bureucrat(bureucrat const &oldBureucrat) {
    *this = oldBureucrat;
    std::cout << "Copy Constructor Called" << std::endl;
}

////////////////////
///Deconstructors///
////////////////////
bureucrat::~bureucrat(void){
    std::cout << "Local bureucrat took a header off the office roof" << std::endl;
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

///////////////////////////
///Increasing/Decreasing///
///////////////////////////
void bureucrat::incrementGrade(void) {
    if (_grade == 1)
        throw gradeTooHighException();
    else
        this->_grade--;
}

void bureucrat::decrementGrade(void) {
    if (_grade == 150)
        throw gradeTooLowException();
    else
        this->_grade++;
}

///////////////////////
///Exception Methods///
///////////////////////
const char *bureucrat::gradeTooLowException::whut(void) const throw(){
    return("Grade is too low should be between 1 & 150 cockhead");
} 

const char *bureucrat::gradeTooHighException::whut(void) const throw(){
    return("Grade is too high should be between 1 & 150 cockhead");
} 