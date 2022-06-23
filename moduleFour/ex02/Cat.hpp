#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public AAnimal
{
private:
    Brain*  _brain;

protected:
    std::string _type;
public:
///Constructors
    Cat();
    Cat(Cat const &oldCat);
///Deconstructors
    ~Cat(); 
///Overloading
    Cat  &operator=(Cat const &toCopy);
///Cat Functions
   void    makeSound(void) const; 
   Brain*    getBrain(void) const;
   void     catsIdeas(std::string idea);
   void     whatAmIThinking(int index);
};

#endif