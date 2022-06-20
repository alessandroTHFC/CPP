#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal* catsNdawgs[10];

    for(int i = 0; i < 10; i++){
        if ( i <= 5) {
            catsNdawgs[i] = new Dog;
        }
        else
            catsNdawgs[i] = new Cat;
    }

    std::cout << "Animal number " <
}