#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "clapTrap.hpp"

class scavTrap: public ClapTrap
{
private:
    
public:
    ///Constructors
    scavTrap(void);
    scavTrap(std::string name);
    scavTrap(scavTrap const &oldScav);
    ///Deconstructors
    ~scavTrap();
    //operator overloads
    scavTrap &operator=(scavTrap const &newScav);
    //scavTrap functions
    void    attack(std::string const &target);
    void    guardGate(void);
};

#endif