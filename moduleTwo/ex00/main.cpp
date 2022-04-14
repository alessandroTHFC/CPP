#include "zombie.hpp"

int main(void) {

    //like this is allocating on the heap
    Zombie  *newBorn = newZombie("Clive");
    newBorn->announce();
    //by calling random chump it should be allocated to the stack
    randomChump("Jermain");

    delete  newBorn;
    return(0);
}