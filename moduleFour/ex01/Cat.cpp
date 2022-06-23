#include "Cat.hpp"

//////////////////
///Constructors///
//////////////////

Cat::Cat(void): Animal("Cat") {
    std::cout << "Default Cat Constructor called" << std::endl;
    _brain = new Brain;
}

Cat::Cat(Cat const &oldCat): Animal(oldCat) {
    std::cout << "Copy Cat Constructor called" << std::endl;
    this->_brain = new Brain(*oldCat.getBrain());
    *this = oldCat;
}

/////////////////////
///Deconstructors///
////////////////////

Cat::~Cat(void) {
    std::cout << "Cat Deconstructed" << std::endl;
    delete _brain;
}

/////////////////
///Overloading///
/////////////////

Cat  &Cat::operator=(Cat const &toCopy) {
    this->_type = toCopy._type;
    return(*this);
}

//////////////////////
///Cat Functions///
//////////////////////

void    Cat::makeSound(void) const {
    std::cout << "Fkn Meow" << std::endl;
}

Brain*  Cat::getBrain(void) const {
    std::cout << "Layin back gettin some brain" << std::endl;
    return(this->_brain);
}

void    Cat::catsIdeas(std::string idea) {
    _brain->setIdeas(idea);
}

void    Cat::whatAmIThinking(int index) {
    std::cout << "hey" << std::endl;
    std::cout << ">>> The cats idea is " << _brain->getIdeas(index) << " <<<" << std::endl;
}
