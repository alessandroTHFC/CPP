#include "PresidentialPardon.hpp"

//////////////////
///Constructors///
//////////////////
presidentialPardon::presidentialPardon(void): AForm("presidentialPardon", 25, 5){
    this->_target = "Void";
    std::cout << "Default form constructor called, base level presidentialPardon form created" << std::endl;
}

presidentialPardon::presidentialPardon(std::string target): AForm("presidentialPardon", 25, 5) {
    this->_target = target;
        std::cout << "presidentialPardon form for " << this->_target << " created" << std::endl;
}

presidentialPardon::presidentialPardon(presidentialPardon const &oldForm): AForm(oldForm) {
    *this = oldForm;
    std::cout << "Form Photocopied" << std::endl;
}

///////////////////
///Deconstructors//
///////////////////
presidentialPardon::~presidentialPardon(void) {
    std::cout << "presidentialPardon Form got shredded and binned, back to jail for you" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
presidentialPardon &presidentialPardon::operator=(presidentialPardon const &toCopy) {
    this->_target = toCopy._target;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, presidentialPardon const &obj)
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
std::string presidentialPardon::getTarget(void) const {
    return(this->_target);
}

/////////////////////////
///Vasectomy Functions///
/////////////////////////
void    presidentialPardon::formFunctionality(void) const {
    std::cout << this->_target << " got pardoned, try not to repeat offend" << std::endl;
}
