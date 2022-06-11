#include "fixed.hpp"

//////////////////
///Constructors///
//////////////////

fixed::fixed(void){
    std::cout << "Constructing Fixed Object" << std::endl;
    this->value = 9;
}

fixed::fixed(const fixed &oldObj){
    std::cout << "Copy of Fixed Obj Constructed" << std::endl;
    *this = oldObj;
}

fixed::fixed(int const num){
    std::cout << "Integer Object Constructed" << std::endl;
    this->value = num << this->_nbBits;
}

fixed::fixed(const float fnum){
    std::cout << "Float Object Constructed" << std::endl;
    this->value = roundf(fnum *(1 <<this->_nbBits));
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
fixed& fixed::operator=(const fixed &oldObj) {
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
    std::cout << "Overloading post increment Operator, incrementing and returning ref to value" << std::endl;
    this->value++;
    return(*this);
}

fixed&  fixed::operator--(void){
    std::cout << "Overloading post decrement Operator, decrementing and returning ref value" << std::endl;
    this->value--;
    return(*this);
}

fixed  fixed::operator++(int){
    fixed   temp(*this);
    std::cout << "Overloading pre increment Operator, incrementing and return temp of orig value" << std::endl;
    this->value++;
    return(temp);
}

fixed  fixed::operator--(int){
    fixed   temp(*this);
    std::cout << "Overloading pre decrement Operator, decrementing and return temp of orig value" << std::endl;
    this->value--;
    return(temp);
}

fixed   &fixed::min(fixed &n1, fixed &n2){
    std::cout << "min function called, returning the smaller of the two provided" << std::endl;
    if (n1 < n2)
        return(n1);
    return(n2);
}

fixed   const &fixed::min(fixed const &n1, fixed const &n2){
    std::cout << "min function called, returning the smaller num of the two provided" << std::endl;
    if (n1.getRedRaw() <= n2.getRedRaw())
        return(n1);
    return(n2);
}

fixed   &fixed::max(fixed &n1, fixed &n2){
    if (n1 > n2)
        return(n1);
    return(n2);
}

fixed   const &fixed::max(fixed const &n1, fixed const &n2){
    if (n1.getRedRaw() > n2.getRedRaw())
        return(n1);
    return(n2);
}

float   fixed::toFloat(void) const {
    return((float)(this->value) / (1 << this->_nbBits));
}

int   fixed::toInt(void) const {
    return(((int)this->value << this->_nbBits));
}

std::ostream& operator<<(std::ostream &output, fixed const &obj){
    output << obj.toFloat();
    return(output);
}
