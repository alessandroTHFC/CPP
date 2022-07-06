#include "data.hpp"

uintptr_t data::serialisation(data *p){
    return(reinterpret_cast<uintptr_t>(p));
}

data* data::deserialise(uintptr_t address){
    return(reinterpret_cast<data *>(address));
}