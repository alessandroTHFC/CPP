#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
protected:
    std::string _type;
public:
///Constructors
    Dog();
    Dog(Dog const &oldDog);
///Deconstructors
    ~Dog(); //Added Virtual Keyword so Deconstructor prints depending on Dog type;
///Overloading
    Dog  &operator=(Dog const &toCopy);
///Dog Functions
   void    makeSound(void) const; //Virtual keyword will allow compiled to specify which Dog sound;
};

#endif