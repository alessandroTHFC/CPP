#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
///Constructors
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &oldWrongAnimal);
///Deconstructors
    ~WrongAnimal(); 
///Overloading
    WrongAnimal  &operator=(WrongAnimal const &toCopy);
///WrongAnimal Functions
   void    makeSound(void) const;
   std::string getType() const;
};

#endif