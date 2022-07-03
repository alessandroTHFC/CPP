 #include "clapTrap.hpp"
 
 ///Constructor
ClapTrap::ClapTrap(void)
{
    this->_name = "nameless";
    this->_hp = 10;
    this->_energy = 10;
    this->_attack = 2;
    std::cout << "A default ClapTrap named was born" << std::endl;
}

ClapTrap::ClapTrap(std::string _flapName)
{
    this->_name = _flapName;
    this->_hp = 10;
    this->_energy = 10;
    this->_attack = 2;
    std::cout << "A ClapTrap named " << this->_name << " was born" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &oldClap) {
    std::cout << "Claptrap copy constructer called" << std::endl;
    *this = oldClap;
}

///Deconstructor
ClapTrap::~ClapTrap(void)
{
    std::cout << this->_name << " has died, Game Over" << std::endl;
}

//Getters & Setters
int     ClapTrap::getAttack(void) const{
    return(this->_attack);
}

void    ClapTrap::setAttack(int amount){
    this->_attack = amount;
}

///ClapTrap functions
void    ClapTrap::attack(const std::string& target){
    if(this->_energy <= 0)//Cannot attack if energy is zero or below
    {
        std::cout << this->_name << "doesn't have enough energy to attack" << std::endl;
    } 
    else if(this->_hp <= 0)///Cannot attack is hp is zero or lower = dead
    {
        std::cout << this->_name << "doesn't have enough HP to attack" << std::endl;
    }
    else//If attacking is possible then attack and remove 1 energy point
    {
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " has attacked " << target << " causing " << this->_attack << " damage" << std::endl;
    }
}  

void    ClapTrap::takeDamage(unsigned int amount){///Takes amount of damage taken as parameter
    if(amount - this->_hp <= 0) //If the amount - current hp is 0 or less, remove amount, declare dead
    {
        this->_hp -= amount;
        std::cout << "ClapTrap " << this->_name << "recieved " << amount << " damage and is now dead" << std::endl;
    }
    else if(amount - this->_hp > 0){ //If above zero and alive, minus amount and print message w new hp
        std::cout << "ClapTrap " << this->_name << " recieved " << amount << " damage" << std::endl;
        this->_hp -= amount;
        std::cout << "ClapTrap " << this->_name << " now has " << this->_hp << " HP left" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){//amount to be repaired as parameter
    if(this->_hp > 0 && this->_energy > 0)//if alive & have energy, repair given amount and remove 1 energy point;
    {
        this->_hp += amount;
        std::cout << "ClapTrap " << this->_name << " has been repaired and gained " << amount << " HP" << std::endl;
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " has 1 energy point deducted, total energy left is " << this->_energy << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired because it's been KO'd" << std::endl;
}