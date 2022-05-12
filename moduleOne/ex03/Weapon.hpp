#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class   weapon {

    private:
        std::string _type;

    public:
        weapon(std::string type);
        ~weapon(void);

        std::string const&  getType(void);
        void                setType(std::string type);
};

#endif