#include "convert.hpp"
//////////////////
///Constructors///
//////////////////
convert::convert(void) {
    this->_intValue = 0;
    this->_charValue = 0;
    this->_floatValue = 0;
    this->_doubleValue = 0;
}

convert::convert(std::string inputString) {
    this->_str = inputString;
    this->_intValue = 0;
    this->_charValue = 0;
    this->_floatValue = 0;
    this->_doubleValue = 0;
}

convert::convert(convert const &oldConvert) {
    *this = oldConvert;
}
///////////////////
///Deconstructor///
///////////////////
convert::~convert(void) {
    std::cout << "This module sucks balls, hurry up and deconstruct" << std::endl;
}

//////////////////////////
///Operator Overloading///
//////////////////////////
convert  &convert::operator=(convert const &toCopy) {
    this->_str = toCopy._str;
    this->_charValue = toCopy._charValue;
    this->_floatValue = toCopy._floatValue;
    this->_intValue = toCopy._intValue;
    this->_doubleValue = toCopy._doubleValue;
    return (*this);
}

//////////////////////////
///Conversion Functions///
//////////////////////////
void convert::converting(void) {
    if(!convert::handlePseudo()) {
        convert::convertChar();
        convert::convertFloat();
        convert::convertDouble();
        convert::convertInt();
    }
    else
        std::cout << "Using Psuedo's you cheeky bastard" << std::endl;
}

void    convert::convertDouble(void) {
    this->_doubleValue = static_cast<double>(atof(_str.c_str()));
    size_t found = _str.find(".");
    if (found != std::string::npos)
         std::cout << "Double: " << this->_doubleValue << std::endl;
    else
        std::cout << "Double: " << this->_doubleValue << ".0" << std::endl;
}

void    convert::convertFloat(void) {
    this->_floatValue = static_cast<float>(atof(_str.c_str()));
    size_t found = _str.find(".");
    if (found != std::string::npos)
        std::cout << "Float: " << this->_floatValue << "f" << std::endl;
    else
        std::cout << "Float: " << this->_floatValue << ".0f" << std::endl;
}

void    convert::convertChar(void) {
    std::string arg = this->_str;
    int len = _str.size();
    int i = static_cast<int>(atoi(arg.c_str()));
    this->_charValue = static_cast<char>(i);
    int j = 0;
    while(isprint(_str[j]))
        j++;
    if (j == len)
        std::cout << "Char:" << _charValue << std::endl;
    else
        std::cout << "Unprintable Characters" << std::endl;

}

void    convert::convertInt(void) {
    std::string arg = this->_str;

    int i = static_cast<int>(atoi(arg.c_str()));
    if (i < -2147483647 || i > 2147483647)
        std::cout << "Int val out of range" << std::endl;
    else
        std::cout << "Int: " << i << std::endl;
}

bool convert::handlePseudo(void) {
    std::string literals[6] = { "nan", "nanf", "-inf", "-inff", "inf", "inff"};
    int i;

    for (i = 0;i < 5; i++) {
        if (literals[i].compare(this->_str))
            return(false);
    }
    switch(i) {
        case(0):
        case(1): {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
            break;
        }
        case(2):
        case(3): {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
            break;
        }
        case(4):
        case(5):{
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: inff" << std::endl;
            std::cout << "double: inf" << std::endl;
            break;
        }
    }
    return(true);
 }

////////////////////////
///Convert Exceptions///
////////////////////////
const char *convert::invalidArguments::what() const throw() {
   return (">>Invalid Amount Of Arguments Given<<");
}