#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
protected:
    std::string _type;
public:
///Constructors
    WrongCat();
    WrongCat(WrongCat const &oldWrongCat);
///Deconstructors
    ~WrongCat(); //Added Virtual Keyword so Deconstructor prints depending on    WrongCat type;
///Overloading
    WrongCat  &operator=(WrongCat const &toCopy);
//  WrongCat Functions
   void    makeSound(void) const; //Virtual keyword will allow compiled to specify which    WrongCat sound;
};

#endif