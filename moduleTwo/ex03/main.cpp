#include "humanA.hpp"
#include "HumanB.hpp"

int main(void) {

    {
        weapon club = weapon("crude spiked club");
        humanA  nino("nino", club);
        nino.attack();
        club.setType("sto cazzo");
        nino.attack();
    }
    {
        weapon club = weapon("crude spiked club");
        HumanB  gaetano("gaetano");
        gaetano.setWeapon(club);
        club.setType("sta minchia");
        gaetano.attack();
    }
}