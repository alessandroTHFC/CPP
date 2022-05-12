#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class   humanA {

    private:
        std::string _name;
        weapon  &weaponRef;
    public:
        humanA(std::string name, weapon &weapon);
        ~humanA(void);
        void    attack(void); 
};

#endif