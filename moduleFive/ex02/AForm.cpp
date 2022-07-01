#include "AForm.hpp"

//////////////////
///Constructors///
//////////////////
AForm::AForm(void){
    this->_name = "Unknown Form";
    this->_isSigned = false;
    this->_gradeLevelSign = 150;
    this->_gradeLevelExecution = 150;
    std::cout << "Default form constructor called, base level form created" << std::endl;
}

AForm::AForm(const std::string name, int signGrade, int execGrade) {
    this->_name = name;
    this->_isSigned = false;
    if (signGrade < 1 || execGrade < 1)
        throw gradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw gradeTooLowException();
    else if (signGrade > execGrade)
        throw gradeTooHighException();
    else {
        this->_gradeLevelSign = signGrade;
        this->_gradeLevelExecution = execGrade;
        std::cout << "Custom Form " << this->_name << " created" << std::endl;
    }
}

AForm::AForm(AForm const &oldForm) {
    *this = oldForm;
    std::cout << "Form Photocopied" << std::endl;
}

///////////////////
///Deconstructors//
///////////////////
AForm::~AForm(void) {
    std::cout << this->_name << " Form got shredded and binned" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
AForm &AForm::operator=(AForm const &toCopy) {
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gradeLevelExecution = toCopy._gradeLevelExecution;
    this->_gradeLevelSign = toCopy._gradeLevelSign;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, AForm const &obj)
{
	out << "📄" << obj.getName() << " Form:" << std::endl;
	out << "Status:" << obj.isSigned() << std::endl;
	out << "Grade to sign:" << obj.getSignGrade() << std::endl;
	out << "Grade to execute:" << obj.getExecGrade() << std::endl;
	return (out);
}

/////////////////////
///Getting/Setting///
/////////////////////
std::string AForm::getName(void) const {
    return (this->_name);
}

int AForm::getSignGrade(void) const {
    return (this->_gradeLevelSign);
}

int AForm::getExecGrade(void) const {
    return (this->_gradeLevelExecution);
}

std::string AForm::isSigned(void) const {
    if (_isSigned)
        return("True");
    else
        return("False");
}

void AForm::setSignature(bureucrat const &bcrat) {
   if (this->_isSigned == true)
        std::cout << "Form already signed bro" << std::endl;
    else if (this->_gradeLevelSign < bcrat.getGrade()){
        std::cout << "Bureucrat " << bcrat.getName() << " not qualified to sign this form." << std::endl;
        throw gradeTooLowException();
    }
    else {
        this->_isSigned = true;
        std::cout << "Bureucrat " << bcrat.getName() << " has signed the " << this->_name << " form" << std::endl;
    }
}

 void    AForm::execute(bureucrat const &bCrat) const {
        if (!this->_isSigned)
            throw formNotSignedException();
        else if (bCrat.getGrade() < this->_gradeLevelExecution)
            throw gradeTooLowException();
        else
            formFunctionality();

} 

///////////////////////
///Exception Methods///
///////////////////////
const char *AForm::gradeTooLowException::what(void) const throw(){
    return("Bureucrats Grade is too low and cant sign this form");
} 

const char *AForm::gradeTooHighException::what(void) const throw(){
    return("Grade is too high should be between 1 & 150");
} 

const char *AForm::formNotSignedException::what(void) const throw(){
    return("Form needs to be signed before execution, go find an appropriate Bureucrat");
} 