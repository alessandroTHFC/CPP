#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>
#include <stdint.h>

class   data{
    public:
        uintptr_t serialisation(data *p);
        data     *deserialise(uintptr_t address);
    private:
        std::string theTruth;
};

#endif