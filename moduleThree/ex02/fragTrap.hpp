#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "clapTrap.hpp"

class fragTrap: public ClapTrap
{
private:
    
public:
//Constructors
    fragTrap(void);
    fragTrap(std::string name);
    fragTrap(fragTrap const &oldFag);
//Deconstructor
    ~fragTrap();
//Operator Overloads
    fragTrap &operator=(fragTrap const &toCopy);
//FragTrap Functions
    void    attack(unsigned int target);
    void    getHighGuys(void);
};

#endif