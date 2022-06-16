#include "clapTrap.hpp"

int main(void)
{
    ClapTrap    flap1("Crystal");
    ClapTrap    flap2("Jennifer");

    flap1.attack("Crystal");
    flap2.takeDamage(flap1.getAttack());
    flap2.beRepaired(5);
    flap2.setAttack(9);
    flap2.attack("Jennifer");
    flap1.takeDamage(flap2.getAttack());
}