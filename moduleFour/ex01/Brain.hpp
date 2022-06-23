#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
///Constructors
    Brain(void);
    Brain(Brain const &oldBrain);
///Deconstructors
    ~Brain();
///Operator Overload
    Brain &operator=(Brain const &toCopy);
///Brain Functions
    std::string getIdeas(int indexPos);
    void    setIdeas(std::string idea);
    
};

#endif