#include "humanA.hpp"

humanA::humanA(std::string name, weapon &weapon): _name(name), weaponRef(weapon) {
    std::cout << "humanA created" << std::endl;
}
humanA::~humanA(void){
    std::cout << "humanA has died" << std::endl;
}

void    humanA::attack(void) {
    std::cout << this->_name << " attacks with their weapon " << weaponRef.getType() << std::endl;
}



