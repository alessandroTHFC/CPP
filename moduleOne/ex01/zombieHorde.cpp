#include "zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {

    Zombie  *newZombies = new Zombie[n];

    for(int i = 0; i < n; i++) {
        newZombies[i].setNameNum(name, i);
        newZombies[i].announce();
    }
    return(newZombies);
}