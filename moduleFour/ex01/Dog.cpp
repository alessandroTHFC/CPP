#include "Dog.hpp"

//////////////////
///Constructors///
//////////////////

Dog::Dog(void): Animal("Dog") {
    std::cout << "Default Dog Constructor called" << std::endl;
    _brain = new Brain;
}

Dog::Dog(Dog const &oldDog): Animal(oldDog) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = oldDog;
}

/////////////////////
///Deconstructors///
////////////////////

Dog::~Dog(void) {
    std::cout << "Dog Deconstructed" << std::endl;
    delete _brain;
}

/////////////////
///Overloading///
/////////////////

Dog  &Dog::operator=(Dog const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///Dog Functions///
//////////////////////

void    Dog::makeSound(void) const {
    std::cout << "Woof bitch" << std::endl;
}

Brain*  Dog::getBrain(void) const {
    std::cout << "Layin back gettin some brain" << std::endl;
    return(this->_brain);
}

void    Dog::dogsIdeas(std::string idea) {
    _brain->setIdeas(idea);
}

void    Dog::whatAmIThinking(int index) {
    std::cout << ">>> The Dogs idea is " << _brain->getIdeas(index) << " <<<" << std::endl;
}