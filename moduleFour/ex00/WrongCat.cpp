#include "WrongCat.hpp"

//////////////////
///Constructors///
//////////////////

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
    std::cout << "Default WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &oldWrongCat): WrongAnimal(oldWrongCat) {
    std::cout << "Copy WrongCat Constructor called" << std::endl;
    *this = oldWrongCat;
}

/////////////////////
///Deconstructors///
////////////////////

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

WrongCat  &WrongCat::operator=(WrongCat const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///WrongCat Functions///
//////////////////////

void    WrongCat::makeSound(void) const {
    std::cout << "WrongCat says kiss my ass" << std::endl;
}