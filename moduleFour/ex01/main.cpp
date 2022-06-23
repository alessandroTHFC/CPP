#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal* catsNdawgs[10];

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
}