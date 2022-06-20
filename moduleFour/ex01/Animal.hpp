#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
///Constructors
    Animal();
    Animal(std::string type);
    Animal(Animal const &oldAnimal);
///Deconstructors
   virtual ~Animal(); //Added Virtual Keyword so Deconstructor prints depending on animal type;
///Overloading
    Animal  &operator=(Animal const &toCopy);
///Animal Functions
   virtual void    makeSound(void) const; //Virtual keyword will allow compiled to specify which animal sound;
   std::string getType() const;
};

#endif