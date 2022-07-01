#include "ShrubberyCreation.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <ios>

//////////////////
///Constructors///
//////////////////
shrubberyCreation::shrubberyCreation(void): AForm("shrubberyCreation", 25, 5){
    this->_target = "Void";
    std::cout << "Default form constructor called, base level shrubberyCreation form created" << std::endl;
}

shrubberyCreation::shrubberyCreation(std::string target): AForm("shrubberyCreation", 25, 5) {
    this->_target = target;
        std::cout << "shrubberyCreation form for " << this->_target << " created" << std::endl;
}

shrubberyCreation::shrubberyCreation(shrubberyCreation const &oldForm): AForm(oldForm) {
    *this = oldForm;
    std::cout << "Form Photocopied" << std::endl;
}

///////////////////
///Deconstructors//
///////////////////
shrubberyCreation::~shrubberyCreation(void) {
    std::cout << "shrubberyCreation Form got shredded and binned" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
shrubberyCreation &shrubberyCreation::operator=(shrubberyCreation const &toCopy) {
    this->_target = toCopy._target;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, shrubberyCreation const &obj)
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
std::string shrubberyCreation::getTarget(void) const {
    return(this->_target);
}

//////////////////////
///Shrub Exceptions///
//////////////////////
const char *shrubberyCreation::shrubFileCantOpen::what(void) const throw(){
    return("File won't open, Maybe the soil isnt fertile enough");
} 

/////////////////////
///Shrub Functions///
/////////////////////
void    shrubberyCreation::formFunctionality(void) const {
    std::ofstream   outputFile;

    outputFile.open(_target + "shrubs");
    if (!outputFile.is_open())
        throw shrubFileCantOpen();
   outputFile << "        W         " << std::endl;
   outputFile << "       WWW        " << std::endl;
   outputFile << "       WWW        " << std::endl;
   outputFile << "W     WWWWW     W " << std::endl;
   outputFile << "WWW   WWWWW   WWW" << std::endl;
   outputFile << " WWW  WWWWW  WWW" << std::endl;
   outputFile << "  WWW  WWW  WWW" << std::endl;
   outputFile << "   WWW WWW WWW   " << std::endl;
   outputFile << "     WWWWWWW    " << std::endl;
   outputFile << "  WWWW  |  WWWW " << std::endl;
   outputFile << "        |       " << std::endl;
   outputFile << "        |       " << std::endl;
   outputFile << "Now to wait for this bad boy to grow" << std::endl;
   outputFile.close();
    std::cout << "You have successfully planted, you're on your way to becoming Cheech or Chong" << std::endl;

}   
 