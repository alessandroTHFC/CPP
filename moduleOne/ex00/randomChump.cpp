#include "zombie.hpp"

void    randomChump(std::string name) {

    Zombie newbie(name);
    newbie.announce();
}