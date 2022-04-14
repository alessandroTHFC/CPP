#include "zombie.hpp"

int main(void) {

    Zombie *theHorde = zombieHorde(10, "Rafa");
    delete [] theHorde;
    return(0);
}