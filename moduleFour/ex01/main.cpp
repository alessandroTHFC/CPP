#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal* catsNdawgs[10];//Creates array Animals

        for(int i = 0; i <= 10; i++){ ///Looping through 2 array slots
            if ( i <= 5) {///First five are Dogs
                Dog* canine = new Dog;
                if (i == 0) {//First Dog has 2 ideas set and printed.
                    canine->dogsIdeas("I like to shit on the lawn");
                    canine->whatAmIThinking(1);
                    canine->dogsIdeas("I can't wait to sniff that other dogs ass");
                    canine->whatAmIThinking(2);
                }
                else if(i == 1){
                    canine->dogsIdeas("I'm gonna eat the fucking shoe");
                    canine->whatAmIThinking(1);
                }
                catsNdawgs[i] = canine;//sets the pos in the array to canine object
            }
            else if (i > 5) {///second 5 will be cats
                Cat* feline = new Cat;
                if (i == 6) {//testing set ideas
                    feline->catsIdeas("Time to lick my own ass i think");
                    feline->whatAmIThinking(1);
                    feline->catsIdeas("Can't wait to buss my owners balls for some biscuits");
                    feline->whatAmIThinking(2);
                }
                else if(i == 7){
                    feline->catsIdeas("Time to prowl the streets for some hotties in heat");
                    feline->whatAmIThinking(1);
                } 
            catsNdawgs[i] = feline;//sets the pos in the array to the feline object
        }
       std::cout << "CatsNdawgs[" << i << "] is a " << catsNdawgs[i]->getType() << std::endl;
    }
    for (int i = 0; i <=10; i++) //For each object
        delete catsNdawgs[i]; //Free object

    ///Testing copy Constructor
    Cat Simba;
    Simba.catsIdeas("Will this copy work?");
    Cat adultSimba(Simba);//Uses Copy constructor, adultSimba takes Simba as toCopy

    adultSimba.whatAmIThinking(1);//Will output simba's idea

    ///Testing operator overload
    Dog rex;
    rex.dogsIdeas("Where tha bitches at??");

    Dog Bruno;
    Bruno = rex; ///overload assign operator

    Bruno.whatAmIThinking(1);//Bruno will output rex's idea
}