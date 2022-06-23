#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
private:
    Brain*  _brain;
protected:
    std::string _type;
public:
///Constructors
    Dog();
    Dog(Dog const &oldDog);
///Deconstructors
    ~Dog(); 
///Overloading
    Dog  &operator=(Dog const &toCopy);
///Dog Functions
   void    makeSound(void) const; 
   Brain*   getBrain(void) const;
   void     dogsIdeas(std::string idea);
};

#endif