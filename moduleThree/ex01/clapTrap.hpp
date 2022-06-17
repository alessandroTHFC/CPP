#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class   ClapTrap {

    public:
        ClapTrap(void);
        ClapTrap(std::string Name);
       ~ClapTrap(void);
       void attack(const std::string& target);
       void takeDamage(unsigned int amount);
       void beRepaired(unsigned int amount);
       int  getAttack(void) const;
       void setAttack(int amount);
    
    protected:
        std::string _name;
        int _hp;
        int _energy;
        int _attack;
};

#endif