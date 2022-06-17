#include "scavTrap.hpp"

scavTrap::scavTrap(): ClapTrap(){
    std::cout << "Default Scav constructer called" << std::endl;
    this->_hp = 100;
    this->_energy = 50;
    this->_attack = 20;
}

scavTrap::scavTrap(std::string name): ClapTrap(name){
    this->_name = name;
    this->_hp = 100;
    this->_energy = 50;
    this->_attack = 20;
}

scavTrap::scavTrap(scavTrap const &oldScav) {
    std::cout << "Scav Copy constructer called" << std::endl;
    *this = oldScav;
}

scavTrap::~scavTrap(){
    std::cout << "ScavTrap destroyed" << std::endl;
}
