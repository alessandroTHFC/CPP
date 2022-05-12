#include "zombie.hpp"

Zombie* newZombie(std::string name) {

    Zombie *newbie = new Zombie(name);
    return(newbie);
}