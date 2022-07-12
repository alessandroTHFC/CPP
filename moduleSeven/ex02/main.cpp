#include "Array.hpp"

int main(void) {
    ///testing with array of integers
    hipHopArray<int> firstOne(10);///array size of 10
    firstOne.setArray(10);
    firstOne.setArray(69);
    firstOne.setArray(1993);
    firstOne.printArrayContents();
    std::cout << "<<<<<<<<<<<>>>>>>>>>>" << std::endl;
    ///testing with array of strings
    hipHopArray<std::string> secondOne(5);
    secondOne.setArray("This ain't got shit to do with shampoo, but watch your head n shoulder");
    secondOne.setArray("Brother older bold enough to fold ya, yo I told ya");
    secondOne.printArrayContents();
    std::cout << "<<<<<<<<<<<>>>>>>>>>>" << std::endl;
    ///overloading the assign operator
    hipHopArray<std::string> thirdOne;
    thirdOne = secondOne;
    thirdOne.printArrayContents();
    ///try block using the overloaded[], using a non valid number will be caught by the exception.
    try {
        std::cout << thirdOne[9] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    ///Above try block will fail as trying to access array index 9 when the array is only 5 long.
    return (0);
}