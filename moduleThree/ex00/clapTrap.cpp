 #include "clapTrap.hpp"
 
ClapTrap::ClapTrap(std::string _flapName)
{
    this->_name = _flapName;
    this->_hp = 10;
    this->_energy = 10;
    this->_attack = 2;
    std::cout << "A ClapTrap named " << this->_name << " was born" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->_name << " has died, Game Over" << std::endl;
}

int     ClapTrap::getAttack(void) const{
    return(this->_attack);
}

void    ClapTrap::setAttack(int amount){
    this->_attack = amount;
}


void    ClapTrap::attack(const std::string& target){
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

void    ClapTrap::takeDamage(unsigned int amount){
    if(amount - this->_hp <= 0)
        std::cout << "ClapTrap " << this->_name << "recieved " << amount << " damage and is now dead" << std::endl;
    else if(amount - this->_hp > 0){
        std::cout << "ClapTrap " << this->_name << " recieved " << amount << " damage" << std::endl;
        this->_hp -= amount;
        std::cout << "ClapTrap " << this->_name << " now has " << this->_hp << " HP left" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if(this->_hp > 0)
    {
        this->_hp += amount;
        std::cout << "ClapTrap " << this->_name << " has been repaired and gained " << amount << " HP" << std::endl;
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " has 1 energy point deducted, total energy left is " << this->_energy << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired because it's been KO'd" << std::endl;
}