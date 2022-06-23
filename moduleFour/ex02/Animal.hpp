#ifndef Animal_HPP
# define Animal_HPP

#include <string>
#include <iostream>

class AAnimal
{
protected:
    std::string _type;
public:
///Constructors
    AAnimal();
    AAnimal(std::string type);
    AAnimal(AAnimal const &oldAAnimal);
///Deconstructors
   virtual ~AAnimal(); //Added Virtual Keyword so Deconstructor prints depending on AAnimal type;
///Overloading
    AAnimal  &operator=(AAnimal const &toCopy);
///AAnimal Functions
   virtual void    makeSound(void) const = 0; //Virtual keyword will allow compiled to specify which AAnimal sound
   //=0 now makes it an Abstract class that doesnt have its own make sound but inherited classes will have their own definition;
   std::string getType() const;
};

#endif