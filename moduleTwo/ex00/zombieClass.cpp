#include "zombie.hpp"

Zombie::Zombie(std::string name) {

    this->_name = name;
    std::cout << "New Zombie " << this->_name << " is born" << std::endl;
    
}

Zombie::~Zombie(void){

    std::cout << "The Zombie named " << this->_name << " has died" << std::endl;
}

void    Zombie::announce(void) {

    std::cout << "BraiiiiiiinnnzzzZZ..." << std::endl;
}
