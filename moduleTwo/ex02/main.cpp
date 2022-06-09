#include "fixed.hpp"

int main(void)
{
    fixed   a;
    fixed   b(a);
    fixed   c;

    c = b;

    std::cout << a.getRedRaw() << std::endl;
    std::cout << b.getRedRaw() << std::endl;
    std::cout << c.getRedRaw() << std::endl;

    return(0);
}