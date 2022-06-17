#include "scavTrap.hpp"

int main(void)
{
    scavTrap    scav1;
    scavTrap    scav2("Sammy");
    scavTrap    scav3(scav2);
    scavTrap    overLoader;
    scavTrap    scav4("Frank");
    ClapTrap    clapper("Dean");
    overLoader = scav4;

    scav4.attack("Dean");
    clapper.takeDamage(scav4.getAttack());
    scav4.guardGate();
    clapper.beRepaired(5);
    std::cout << "Scav " << scav2.getName() << " has entered the fray ready to drop some got damn bombs" << std::endl;
    scav2.attack("Frank");
    scav4.takeDamage(10);
    std::cout << "Scav " << scav4.getName() << " took less damage because he's in guard mode, now he's pissed" << std::endl;

}