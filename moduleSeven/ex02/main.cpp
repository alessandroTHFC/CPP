#include "Array.hpp"

int main(void) {

    hipHopArray<int> firstOne(10);
    firstOne.setArray(10);
    firstOne.setArray(69);
    firstOne.setArray(1993);
    firstOne.printArrayContents();
    std::cout << "<<<<<<<<<<<>>>>>>>>>>" << std::endl;
    hipHopArray<std::string> secondOne(5);
    secondOne.setArray("This ain't got shit to do with shampoo, but watch your head n shoulder");
    secondOne.setArray("Brother older bold enough to fold ya, yo I told ya");
    secondOne.printArrayContents();
    std::cout << "<<<<<<<<<<<>>>>>>>>>>" << std::endl;
    hipHopArray<std::string> thirdOne;
    thirdOne = secondOne;
    thirdOne.printArrayContents();

    try {
        std::cout << thirdOne[9] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}