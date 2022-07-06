#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class   HumanB { 

    private:
        std::string _name;
        weapon      *weaponPtr;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(weapon &weapon);
};

#endif