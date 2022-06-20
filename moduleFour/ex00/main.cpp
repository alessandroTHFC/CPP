#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

const Animal* Snoop = new Dog();
const Animal* Pussy = new Cat();
const Animal* Clive = new Animal();
const WrongAnimal* Dickhead = new WrongAnimal;
const WrongAnimal* MistakenPussy = new WrongCat;

std::cout << Snoop->getType() << " " << std::endl;
std::cout << Pussy->getType() << " " << std::endl;
std::cout << Dickhead->getType() << " " << std::endl;
std::cout << MistakenPussy->getType() << " " << std::endl; //this will return type as wrong cat
Clive->makeSound();//makes default animal noise
Snoop->makeSound();//makes dog noise
Pussy->makeSound();//makes cat noise
Dickhead->makeSound();//makes default wronganimal noise
MistakenPussy->makeSound();//makes default wronganimal noise
//here will not recognise as wrong cat because no virtual keyword on wronganimal.hpp makeSound function;

delete Snoop;
delete Pussy;
delete Clive;
delete Dickhead;
delete MistakenPussy;
}