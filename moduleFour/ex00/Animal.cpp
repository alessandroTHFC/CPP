#include "Animal.hpp"

//////////////////
///Constructors///
//////////////////

Animal::Animal(void) {
    std::cout << "Default Animal Constructor called" << std::endl;
    this->_type = "Uknonwn Animal";
}

Animal::Animal(std::string type) {
    this->_type = type;
    std::cout << "Animal of type " << this->_type << " Constructed" << std::endl;
}

Animal::Animal(Animal const &oldAnimal) {
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = oldAnimal;
}

/////////////////////
///Deconstructors///
////////////////////

Animal::~Animal(void) {
    std::cout << "Base Animal Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

Animal  &Animal::operator=(Animal const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///Animal Functions///
//////////////////////

void    Animal::makeSound(void) const {
    std::cout << "Base Class Animal Noise" << std::endl;
}

std::string    Animal::getType(void) const {
    return(this->_type);
}