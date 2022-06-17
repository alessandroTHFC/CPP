#include "scavTrap.hpp"

//////////////////
///Constructors///
//////////////////
scavTrap::scavTrap(): ClapTrap(){
    std::cout << "Default Scav constructer called" << std::endl;
    this->_hp = 100;
    this->_energy = 50;
    this->_attack = 20;
}

scavTrap::scavTrap(std::string name): ClapTrap(name){
    this->_name = name;
    this->_hp = 100;
    this->_energy = 50;
    this->_attack = 20;
}

scavTrap::scavTrap(scavTrap const &oldScav) {
    std::cout << "Scav Copy constructer called" << std::endl;
    *this = oldScav;
}

///////////////////
///Deconstructor///
///////////////////
scavTrap::~scavTrap(){
    std::cout << "ScavTrap destroyed" << std::endl;
}

/////////////////
///Overloading///
/////////////////
scavTrap  &scavTrap::operator=(scavTrap const &toCopy){
    std::cout << "Assigning content of " << toCopy._name << " to " << this->_name << " by overloading =" << std::endl;
    this->_name = toCopy._name;
    this->_hp = toCopy._hp;
    this->_attack = toCopy._attack;
    this->_energy = toCopy._energy;
    std::cout << "Scav now known as " << this->_name << " the same as copied scav " << toCopy._name << std::endl;
    return(*this);
}

///////////////////
///ScavFunctions///
///////////////////
void    scavTrap::attack(std::string const &target) {
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
        std::cout << "ScavTrap " << this->_name << " has attacked " << target << " causing " << this->_attack << " damage" << std::endl;
    }
}  

void    scavTrap::guardGate(void) {
    std::cout << "Scav " << this->_name << " has entered gate keeper mode, holding down the mother fkn fort bitch" << std::endl;
}


/////////////
////Getter///
/////////////
std::string scavTrap::getName(){
    return(this->_name);
}