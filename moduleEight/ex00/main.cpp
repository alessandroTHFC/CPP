#include "easyFind.hpp"

void print(int a) {
    static int i = 0;
    std::cout << "vector index " << i << " is " << a << std::endl;
    i++;
}

int main(void) {
    ///First Try block will return value searched
    std::list<int>  listOne;
    std::vector<int> vecOne;
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

    ///////////////////////////////////////////
     try {
        for (int i = 5; i < 1000; i += 10)
            vecOne.push_back(i);
        std::cout << "Value located: " << *easyFind(vecOne, 95) << std::endl;
        std::for_each(vecOne.begin(), vecOne.end(), print); ///algo library "for_each"
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}