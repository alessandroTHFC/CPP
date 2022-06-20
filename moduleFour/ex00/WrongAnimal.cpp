#include "WrongAnimal.hpp"

//////////////////
///Constructors///
//////////////////

WrongAnimal::WrongAnimal(void) {
    std::cout << "Default WrongAnimal Constructor called" << std::endl;
    this->_type = "Uknonwn WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) {
    this->_type = type;
    std::cout << "WrongAnimal of type " << this->_type << " Constructed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &oldWrongAnimal) {
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = oldWrongAnimal;
}

/////////////////////
///Deconstructors///
////////////////////

WrongAnimal::~WrongAnimal(void) {
    std::cout << "Base WrongAnimal Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///WrongAnimal Functions///
//////////////////////

void    WrongAnimal::makeSound(void) const {
    std::cout << "Base Class WrongAnimal Noise" << std::endl;
}

std::string    WrongAnimal::getType(void) const {
    return(this->_type);
}