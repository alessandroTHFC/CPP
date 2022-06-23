#include "Animal.hpp"

//////////////////
///Constructors///
//////////////////

AAnimal::AAnimal(void) {
    std::cout << "Default AAnimal Constructor called" << std::endl;
    this->_type = "Uknonwn AAnimal";
}

AAnimal::AAnimal(std::string type) {
    this->_type = type;
    std::cout << "AAnimal of type " << this->_type << " Constructed" << std::endl;
}

AAnimal::AAnimal(AAnimal const &oldAAnimal) {
    std::cout << "AAnimal Copy Constructor called" << std::endl;
    *this = oldAAnimal;
}

/////////////////////
///Deconstructors///
////////////////////

AAnimal::~AAnimal(void) {
    std::cout << "Base AAnimal Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

AAnimal  &AAnimal::operator=(AAnimal const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///AAnimal Functions///
//////////////////////

void    AAnimal::makeSound(void) const {
    
}

std::string    AAnimal::getType(void) const {
    return(this->_type);
}