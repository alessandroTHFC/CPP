#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class   FlapTrap {

    public:
        FlapTrap(std::string _flapName);
       ~FlapTrap(void);
       void attack(const std::string& target);
       void takeDamage(unsigned int amount);
       void beRepaired(unsigned int amount);
    
    private:
        std::string _name;
        int _hp;
        int _energy;
        int _attack;
};

#endif