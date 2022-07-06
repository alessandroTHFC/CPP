#include "zombie.hpp"

int main(void) {

    //like this is allocating on the heap
    Zombie  *newBorn = newZombie("Clive");//newZombie function dynamically allocates the memory;
    newBorn->announce();
    //by calling random chump it should be allocated to the stack
    randomChump("Jermain");//randomChump just declares a zombie and announces

    delete  newBorn;//new born deleted to free memory;
    return(0);
}