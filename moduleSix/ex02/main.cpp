#include "base.hpp"

int main(void) {
    std::cout << "new base class pointer generated" << std::endl;
    base    *baseClPtr = generateSubClass();
    std::cout << std::endl;
    
    identify(baseClPtr);

    base    &baseClRef = *baseClPtr;
    identify(baseClRef);
}