#include "fixed.hpp"

//////////////////
///Constructors///
//////////////////

fixed::fixed(void){
    std::cout << "Constructing Fixed Object" << std::endl;
    this->value = 0;
}

fixed::fixed(const fixed &oldObj){
    std::cout << "Copy of Fixed Obj Constructed" << std::endl;
    *this = oldObj;
}

fixed::fixed(int const num){
    std::cout << "Integer Object Constructed" << std::endl;
    this->value = num << _nbBits;
}

fixed::fixed(const float fnum){
    std::cout << "Float Object Constructed" << std::endl;
    this->value = roundf(fnum *(1 << _nbBits));
}

////////////////////
///Deconstructors///
////////////////////

fixed::~fixed(){
    std::cout << "Deconstructing Object.." << std::endl;
}

/////////////
///Getting///
/////////////

int fixed::getRedRaw(void) const {
    std::cout << "Getting the Rawbits.." << std::endl;
    return(this->value);
}

/////////////
///Setting///
/////////////

void    fixed::setRawBits(int const &newVal) {
    std::cout << "Setting new rawBits Value" << std::endl;
    this->value = newVal;
}

/////////////////
///Overloading///
/////////////////

//overloading assignment operator from one object to another
//setting first objects value to the second objects value//
fixed & fixed::operator=(const fixed &oldObj) {
    std::cout << "Overloading = Operator, ObjVal = oldObjVal" << std::endl;
    this->value = oldObj.getRedRaw();
    return(*this);
}

bool    fixed::operator==(const fixed &obj2){
    std::cout << "Overloading == Operator, returns true if ObjVal is equal to obj2.." << std::endl;
    return(this->value == obj2.getRedRaw());
}

bool    fixed::operator<=(const fixed &obj2){
    std::cout << "Overloading <= Operator, returns true if ObjVal is less equal to obj2.." << std::endl;
    return(this->value <= obj2.getRedRaw());
}

bool    fixed::operator>=(const fixed &obj2){
    std::cout << "Overloading >= Operator, returns true if ObjVal is greatr equal to obj2.." << std::endl;
    return(this->value >= obj2.getRedRaw());
}

bool    fixed::operator!=(const fixed &obj2){
    std::cout << "Overloading != Operator, returns true if ObjVal is not equal to obj2.." << std::endl;
    return(this->value != obj2.getRedRaw());
}

bool    fixed::operator<(const fixed &obj2){
    std::cout << "Overloading < Operator, returns true if ObjVal is less than obj2.." << std::endl;
    return(this->value < obj2.getRedRaw());
}

bool    fixed::operator>(const fixed &obj2){
    std::cout << "Overloading > Operator, returns true if ObjVal is greater than obj2.." << std::endl;
    return(this->value > obj2.getRedRaw());
}

fixed   fixed::operator*(const fixed &obj2){
    std::cout << "Overloading * Operator, returns value of obj times obj2.." << std::endl;
    return(this->value * obj2.getRedRaw());
}

fixed   fixed::operator+(const fixed &obj2){
    std::cout << "Overloading + Operator, returns value of obj plus obj2.." << std::endl;
    return(this->value + obj2.getRedRaw());
}

fixed   fixed::operator-(const fixed &obj2){
    std::cout << "Overloading - Operator, returns value of obj minus obj2.." << std::endl;
    return(this->value - obj2.getRedRaw());
}

fixed   fixed::operator/(const fixed &obj2){
    std::cout << "Overloading / Operator, returns value of obj divide obj2.." << std::endl;
    return(this->value / obj2.getRedRaw());
}

fixed&  fixed::operator++(void){
    this->value++;
    return(*this);
}

fixed&  fixed::operator--(void){
    this->value--;
    return(*this);
}

fixed  fixed::operator++(int){
    fixed   temp(*this);
    this->value++;
    return(temp);
}

fixed  fixed::operator--(int){
    fixed   temp(*this);
    this->value--;
    return(temp);
}