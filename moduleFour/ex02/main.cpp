#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    //Animal class is now AAnimal class to show it has become an Abstract Class
    AAnimal* catsNdawgs[10];

        for(int i = 0; i <= 10; i++){
            if ( i <= 5) {
                Dog* canine = new Dog;
                if (i == 0) {
                    canine->dogsIdeas("I like to shit on the lawn");
                    canine->whatAmIThinking(1);
                    canine->dogsIdeas("I can't wait to sniff that other dogs ass");
                    canine->whatAmIThinking(2);
                }
                else if(i == 1){
                    canine->dogsIdeas("I'm gonna eat the fucking shoe");
                    canine->whatAmIThinking(1);
                }
                catsNdawgs[i] = canine;
            }
            else if (i > 5) {
                Cat* feline = new Cat;
                if (i == 6) {
                    feline->catsIdeas("Time to lick my own ass i think");
                    feline->whatAmIThinking(1);
                    feline->catsIdeas("Can't wait to buss my owners balls for some biscuits");
                    feline->whatAmIThinking(2);
                }
                else if(i == 7){
                    feline->catsIdeas("Time to prowl the streets for some hotties in heat");
                    feline->whatAmIThinking(1);
                } 
            catsNdawgs[i] = feline;
        }
       std::cout << "CatsNdawgs[" << i << "] is a " << catsNdawgs[i]->getType() << std::endl;
    }
    for (int i = 0; i <=10; i++)
        delete catsNdawgs[i];

    //testing copy constructor
    Cat Simba;
    Simba.catsIdeas("Will this copy work?");
    Cat adultSimba(Simba);

    adultSimba.whatAmIThinking(1);

    //testing operator overload of =
    Dog rex;
    rex.dogsIdeas("Where tha bitches at??");

    Dog Bruno;
    Bruno = rex;

    Bruno.whatAmIThinking(1);

    ///Now that Animal class is Abstract

    //AAnimal*  unknown = new AAnimal;
    //above call is now throws error. Cannot declare an animal class by itself because its abstract.

    //AAnimal* ragDoll = new Cat; 
    //Above call will work fine, as AAnimal is being declared with its subClass of Cat. 
}