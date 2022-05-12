#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
    std::cout << "HumanB has been created" << std::endl;
}

HumanB::~HumanB(void) {
    std::cout << "HumanB has been destroyed" << std::endl;
}

void    HumanB::attack(void){
    std::cout << this->_name << " attacks with their weapon " << this->weaponPtr->getType() << std::endl;
}

void    HumanB::setWeapon(weapon &weapon) {
    this->weaponPtr = &weapon;
}