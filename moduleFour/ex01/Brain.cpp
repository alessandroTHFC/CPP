#include "Brain.hpp"
#include <set>

//////////////////
///Constructors///
//////////////////

Brain::Brain(void) {
    std::cout << "Default Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const &oldBrain)  {
    std::cout << "Copy Brain Constructor called" << std::endl;
    *this = oldBrain;
}

/////////////////////
///Deconstructors///
////////////////////

Brain::~Brain(void) {
    std::cout << "Brain Deconstructed" << std::endl;
}

/////////////////
///Overloading///
/////////////////

Brain  &Brain::operator=(Brain const &toCopy) {
    for(int i = 0; i < 100; i++)
        _ideas[i] = toCopy._ideas[i];
    return(*this);
}

//////////////////////
///Brain Functions///
//////////////////////

std::string Brain::getIdeas(int indexPos) {
    return(this->_ideas[indexPos]);
}

void    Brain::setIdeas(std::string idea) {
    int i = 1;
    std::cout << "sti cazzi" << std::endl;
    while (!this->_ideas[i].empty()) {
        std::cout << "ffs" << std::endl;
        i++;
    }
    std::cout << "allo allo" << std::endl;
    this->_ideas[i] = idea;
    std::cout << "not setIdeas" << std::endl;
}
