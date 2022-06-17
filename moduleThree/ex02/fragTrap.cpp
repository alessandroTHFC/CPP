#include "fragTrap.hpp"

//////////////////
///Constructors///
//////////////////

fragTrap::fragTrap(void) {
    this->_name = "nameless";
    this->_hp = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "A default fragTrap was born" << std::endl;
}

fragTrap::fragTrap(std::string name) {
    this->_name = name;
    this->_hp = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "fragTrap " << this->_name << " was born" << std::endl;
}

fragTrap::fragTrap(fragTrap const &oldFag) : ClapTrap(oldFag) {
    std::cout << "fragTrap copy constructor is called" << std::endl;
    *this = oldFag;
}

////////////////////
///Deconstructors///
////////////////////
fragTrap::~fragTrap(void) {
    std::cout << "Deconstructor called, FragTrap " << this->_name << " has been deconstructed" << std::endl;
}

///////////////////////
///Operator Overload///
///////////////////////
fragTrap &fragTrap::operator=(fragTrap const &toCopy){
    this->_name = toCopy._name;
    this->_hp = toCopy._hp;
    this->_energy = toCopy._energy;
    this->_attack = toCopy._attack;
    return(*this);
}

////////////////////
///Frag Functions///
////////////////////
void    fragTrap::attack(std::string const target) {
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

void    fragTrap::getHighGuys(void) {
    std::cout << this->_name << " is passing the doob to the left" << std::endl;
}

///////////////////////
///Getters & Setters///
///////////////////////
void    fragTrap::setName(std::string newName) {
    this->_name = newName;
}

std::string fragTrap::getName(){
    return(this->_name);
}