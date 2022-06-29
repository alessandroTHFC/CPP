#include "Forms.hpp"

//////////////////
///Constructors///
//////////////////
Forms::Forms(void){
    this->_name = "Unknown Form";
    this->_isSigned = false;
    this->_gradeLevelSign = 150;
    this->_gradeLevelExecution = 150;
    std::cout << "Default form constructor called, base level form created" << std::endl;
}

Forms::Forms(const std::string name, int signGrade, int execGrade) {
    this->_name = name;
    this->_isSigned = false;
    if (signGrade < 1 || execGrade < 1)
        throw gradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw gradeTooLowException();
    else if (signGrade > execGrade)
        throw gradeTooHighException();
    else 
        this->_gradeLevelSign = signGrade;
        this->_gradeLevelExecution = execGrade;
    std::cout << "Custom Form " << this->_name << " created" << std::endl;
}

Forms::Forms(Forms const &oldForm) {
    *this = oldForm;
    std::cout << "Form Photocopied" << std::endl;
}

///////////////////
///Deconstructors//
///////////////////
Forms::~Form(void) {
    std::cout << this->_name << " Form got shredded and binned" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
Forms &Forms::operator=(Forms const &toCopy) {
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gradeLevelExecution = toCopy._gradeLevelExecution;
    this->_gradeLevelSign = toCopy._gradeLevelSign;
}

/////////////////////
///Getting/Setting///
/////////////////////
std::string Forms::getName(void) {
    return (this->_name);
}

int Forms::getSignGrade(void) {
    return (this->signGrade);
}

int Forms::getExecGrade(void) {
    return (this->execGrade);
}

void Forms::setSignature(bureucrat const &bcrat) {
    try 
}