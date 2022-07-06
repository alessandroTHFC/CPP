#include "Intern.hpp"

//////////////////
///Constructors///
//////////////////
intern::intern(void) {
    std::cout << "A new intern has joined the company, pray for him" << std::endl;
}

intern::intern(intern const &oldIntern) {
    *this = oldIntern;
}

///////////////////
///Deconstructor///
///////////////////
intern::~intern(void) {
    std::cout << "Intern couldnt handle it anymore, took a gun, blew his brains out and deconstructed" << std::endl;
}
///////////////////////
///Operator Overload///
///////////////////////
intern& intern::operator=(intern const &toCopy) {
    *this = toCopy;
    return(*this);
}

//////////////////////
///Intern Functions///
//////////////////////
AForm* intern::makeForm(std::string formName, std::string target) {
    std::string formArray[3] = {"presidentialPardon", "vasectomyRequest", "shrubberyCreation"};
    int i;

    for(i = 0; i < 3; i++)
        if(!formArray[i].compare(formName))
            break;
    switch(i) {
        case 0:  return(new presidentialPardon(target));
        case 1:  return(new vasectomyRequest(target));
        case 2:  return(new shrubberyCreation(target));
        default: throw nonExistantForm();
    }          
}     

///////////////////////
///Intern Exceptions///
///////////////////////
const char *intern::nonExistantForm::what(void) const throw(){
    return("Why you playing games and filing for non existant forms!");
} 