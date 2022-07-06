#include "fixed.hpp"

int main(void)
{
    //testing copy constructor b(a) and overloading of the = operator to accept two fixed objects c=b;
    fixed   a;
    fixed   b(a);
    fixed   c;

    c = b;

    std::cout << a.getRedRaw() << std::endl;
    std::cout << b.getRedRaw() << std::endl;
    std::cout << c.getRedRaw() << std::endl;

    return(0);
}