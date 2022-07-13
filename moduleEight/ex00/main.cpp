#include "easyFind.hpp"

int main(void) {
    ///First Try block will return value searched
    std::list<int>  listOne;
    try {
        listOne.push_back(20);
        listOne.push_back(25);
        std::cout << "Value located: " << *easyFind(listOne, 25) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    ///////Second Try Block will error as number doesnt exist
    try {
        listOne.push_back(20);
        listOne.push_back(25);
        std::cout << "Value located: " << *easyFind(listOne, 50) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}