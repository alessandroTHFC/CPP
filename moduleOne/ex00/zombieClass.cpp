#include "zombie.hpp"
//Zombie class contructor
Zombie::Zombie(std::string name) {

    this->_name = name;
    std::cout << "New Zombie " << this->_name << " is born" << std::endl;
    
}
///Deconstructor
Zombie::~Zombie(void){

    std::cout << "The Zombie named " << this->_name << " has died" << std::endl;
}

void    Zombie::announce(void) {

    std::cout << "BraiiiiiiinnnzzzZZ..." << std::endl;
}
