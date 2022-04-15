#include "Weapon.hpp"

weapon::weapon(std::string type): _type(type){
    std::cout << "weapon of type " << this->_type << " created" << std::endl;
}

weapon::~weapon(void) {
    std::cout << "weapon destroyed" << std::endl;
}

void    weapon::setType(std::string newType){
    this->_type = newType;
}

std::string const&  weapon::getType(void) {
    return _type;
}