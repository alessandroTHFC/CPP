#include "zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
    //Function Dynamically allots a zombie a Zombie array;
    Zombie  *newZombies = new Zombie[n];
    //Per Zombie in the array set their respective attributes & announce;
    for(int i = 0; i < n; i++) {
        newZombies[i].setNameNum(name, i);
        newZombies[i].announce();
    }
    return(newZombies);
}