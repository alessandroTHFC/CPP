#include "Cat.hpp"

//////////////////
///Constructors///
//////////////////

Cat::Cat(void): Animal("Cat") {
    std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const &oldCat): Animal(oldCat) {
    std::cout << "Copy Cat Constructor called" << std::endl;
    *this = oldCat;
}

/////////////////////
///Deconstructors///
////////////////////

Cat::~Cat(void) {
    std::cout << "Cat Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

Cat  &Cat::operator=(Cat const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///Cat Functions///
//////////////////////

void    Cat::makeSound(void) const {
    std::cout << "Fkn Meow" << std::endl;
}

Brain*  Cat::getBrain(void) const {
    std::cout << "Layin back gettin some brain" << std::endl;
    return(this->_brain);
}

