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
    void    attack(std::string const target);
    void    getHighGuys(void);
//Getters & Setters
    void    setName(std::string newName);
    std::string getName(void);
};

#endif