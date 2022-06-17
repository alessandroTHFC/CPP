#include "fragTrap.hpp"

int main(void)
{
    fragTrap frag1;
    fragTrap frag2("Snoop");
    ClapTrap crapper("Drake");

    frag2.getHighGuys();
    frag1.setName("Dre");
    std::cout << frag1.getName() << " Grabs the dutchie from " << frag2.getName() << std::endl;
    frag1.attack("Drake");
    crapper.takeDamage(frag1.getAttack());
    frag2.attack("Drake");
    crapper.takeDamage(frag2.getAttack());
}