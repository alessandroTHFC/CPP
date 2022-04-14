#include "zombie.hpp"

Zombie::Zombie(void) {

    std::cout << "New Zombie is born" << std::endl;
    
}

Zombie::~Zombie(void){

    std::cout << "The Zombie named " << this->_name << " has died" << std::endl;
}

void    Zombie::setNameNum(std::string name, int id) {

    this->idNum = id;
    this->_name = name;
}

void    Zombie::announce(void) {

    std::cout << "Zombie number " << this->idNum << " called "
        << this->_name << " says BraaaiiinnnZZZ" << std::endl;
}
