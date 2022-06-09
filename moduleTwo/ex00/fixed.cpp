#include "fixed.hpp"

fixed::fixed(void){
    std::cout << "Standard Constructor Called" << std::endl;
    this->value = 0;
}

fixed::fixed(const fixed &oldObj){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = oldObj;
}

fixed::~fixed(){
    std::cout << "Deconstructer Called" << std::endl;
}

int fixed::getRedRaw(void) const {
    std::cout << "getRedRaw called" << std::endl;
    return(this->value);
}

void    fixed::setRawBits(int const &newVal) {
    this->value = newVal;
}

fixed & fixed::operator=(const fixed &oldObj) {
    std::cout << "Operator Overloading of Assignment Operator called" << std::endl;
    this->value = oldObj.getRedRaw();
    return(*this);
}