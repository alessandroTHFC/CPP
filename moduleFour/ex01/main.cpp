#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
   // Animal* catsNdawgs[10];

    for(int i = 0; i < 10; i++){
        if ( i <= 5) {
            std::cout << "Animal number " << i << " Is a Dog" << std::endl;
            Dog* canine = new Dog;
            canine->dogsIdeas("I like to shit on the lawn");
            canine->getBrain()->getIdeas(0);
            //catsNdawgs[i] = canine;
        }
       // else
            //catsNdawgs[i] = new Cat;
    }
}