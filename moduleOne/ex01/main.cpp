#include "zombie.hpp"

int main(void) {

    Zombie *theHorde = zombieHorde(10, "Rafa"); //Returns pointer to array of Zombies
    delete [] theHorde;//Free memory;
    return(0);
}