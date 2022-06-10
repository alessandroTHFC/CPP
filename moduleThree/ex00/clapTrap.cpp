 #include "clapTrap.hpp"
 
FlapTrap::FlapTrap(std::string _flapName)
{
    this->_name = _flapName;
    this->_hp = 10;
    this->_energy = 10;
    this->_attack = 0;
    std::cout << "A FlapTrap named " << this->_name << " was born" << std::endl;
}

FlapTrap::~FlapTrap(void)
{
    std::cout << this->_name << " has died, Game Over" << std::endl;
}

void    FlapTrap::attack(const std::string& target)
{
    if(this->_energy <= 0)
    {
        std::cout << this->_name << "doesn't have enough energy to attack" << std::endl;
    } 
    else if(this->_hp <= 0)
    {
        std::cout << this->_name << "doesn't have enough HP to attack" << std::endl;
    }
    else
    {
        this->_energy--;
        std::cout << "Flap " << this->_name << " has attacked " << target << " causing " << this->_attack << " damage" << std::endl;
    }
}   