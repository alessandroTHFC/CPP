#include "fixed.hpp"

int main(void)
{
    fixed  a;
    fixed const b(fixed(5.05f)* fixed(2));

    std::cout << a.getRedRaw() << std::endl;
    std::cout << b.getRedRaw() << std::endl;
    std::cout << fixed::min(a, b) << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    return(0);
}