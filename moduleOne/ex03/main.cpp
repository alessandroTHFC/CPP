#include "humanA.hpp"
#include "HumanB.hpp"

int main(void) {

    {
        weapon club = weapon("crude spiked club");
        humanA  nino("nino", club); //Human A takes reference to Weapon object in its constructor and sets it;
        nino.attack();
        club.setType("sto cazzo");
        nino.attack();
    }
    {
        weapon club = weapon("crude spiked club");
        HumanB  gaetano("gaetano");
        gaetano.setWeapon(club);//Human B has pointer attribute Weapon, sets that through set weapon function;
        club.setType("sta minchia");
        gaetano.attack();
    }
}