#include "convert.hpp"

int main(int ac, char **av) {
    
    try {
        if (ac < 2)
            throw convert::invalidArguments();
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    convert value1(av[1]);
    value1.converting();

}