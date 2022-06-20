#include "Dog.hpp"

//////////////////
///Constructors///
//////////////////

Dog::Dog(void): Animal("Dog") {
    std::cout << "Default Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &oldDog): Animal(oldDog) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = oldDog;
}

/////////////////////
///Deconstructors///
////////////////////

Dog::~Dog(void) {
    std::cout << "Dog Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

Dog  &Dog::operator=(Dog const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///Dog Functions///
//////////////////////

void    Dog::makeSound(void) const {
    std::cout << "Woof bitch" << std::endl;
}