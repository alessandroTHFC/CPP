#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
protected:
    std::string _type;
public:
///Constructors
    Cat();
    Cat(Cat const &oldCat);
///Deconstructors
    ~Cat(); //Added Virtual Keyword so Deconstructor prints depending on Cat type;
///Overloading
    Cat  &operator=(Cat const &toCopy);
///Cat Functions
   void    makeSound(void) const; //Virtual keyword will allow compiled to specify which Cat sound;
};

#endif