#include "data.hpp"

int main(void){
    data    *initialValue = new data;

    std::cout << "Pointer starts as: " << initialValue << std::endl;

    uintptr_t   afterConversion = initialValue->serialisation(initialValue);
    std::cout << "Post Conversion value is: " << afterConversion << std::endl;

    data    *andBackAgain = initialValue->deserialise(afterConversion);
    std::cout << "After deserialisation value is: " << andBackAgain << std::endl;

    delete initialValue;
}