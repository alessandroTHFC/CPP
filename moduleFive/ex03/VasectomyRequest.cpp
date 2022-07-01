#include "VasectomyRequest.hpp"

//////////////////
///Constructors///
//////////////////
vasectomyRequest::vasectomyRequest(void): AForm("vasectomyRequest", 25, 5){
    this->_target = "Void";
    std::cout << "Default form constructor called, base level vasectomyRequest form created" << std::endl;
}

vasectomyRequest::vasectomyRequest(std::string target): AForm("vasectomyRequest", 25, 5) {
    this->_target = target;
        std::cout << "vasectomyRequest form for " << this->_target << " created" << std::endl;
}

vasectomyRequest::vasectomyRequest(vasectomyRequest const &oldForm): AForm(oldForm) {
    *this = oldForm;
    std::cout << "Form Photocopied" << std::endl;
}

///////////////////
///Deconstructors//
///////////////////
vasectomyRequest::~vasectomyRequest(void) {
    std::cout << "vasectomyRequest Form got shredded and binned, guess your boys will keep swimmin" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
vasectomyRequest &vasectomyRequest::operator=(vasectomyRequest const &toCopy) {
    this->_target = toCopy._target;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, vasectomyRequest const &obj)
{
	out << "📄" << obj.getName() << " Form:" << std::endl;
    out << "Target:" << obj.getTarget() << std::endl;
	out << "Status:" << obj.isSigned() << std::endl;
	out << "Grade to sign:" << obj.getSignGrade() << std::endl;
	out << "Grade to execute:" << obj.getExecGrade() << std::endl;
	return (out);
}

/////////////////////
///Getting/Setting///
/////////////////////
std::string vasectomyRequest::getTarget(void) const {
    return(this->_target);
}

/////////////////////////
///Vasectomy Functions///
/////////////////////////
void    vasectomyRequest::formFunctionality(void) const {
    std::cout << this->_target << " has finally got his balls snipped, goodbye manhood" << std::endl;
}
