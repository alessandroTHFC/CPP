#include "easyFind.hpp"

void print(int a) {
    static int i = 0;
    std::cout << "{using for_each algo)vector index " << i << " is " << a << std::endl;
    i++;
}

int main(void) {
    ///First Try block will return value searched
    std::list<int>  listOne;
    std::vector<int> vecOne;
    try {
        listOne.push_back(20);
        listOne.push_back(25);
        for (int i = 20; i < 50; i += 3)
            listOne.push_back(i);
        
        std::cout << "Value located: " << *easyFind(listOne, 25) << std::endl;
        for(int num : listOne) ///using range based for loop
            std::cout << "(range based loop)list numbers are: " << num << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "<<<<<<<>>>>>>>>" << std::endl;
    ///////Second Try Block will error as number doesnt exist
    try {
        listOne.push_back(20);
        listOne.push_back(25);
        for (int i = 15; i < 50; i +=2)
            listOne.push_back(i);
        for (auto it = listOne.begin(); it != listOne.end(); it++)
            std::cout << "(using auto keyword/iterator) list values are: " << *it << std::endl;

        std::cout << "Value located: " << *easyFind(listOne, 50) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "<<<<<<<>>>>>>>>" << std::endl;
    ///////////////////////////////////////////
     try {
        for (int i = 5; i < 100; i += 10)
            vecOne.push_back(i);
        std::cout << "Value located: " << *easyFind(vecOne, 95) << std::endl;
        std::for_each(vecOne.begin(), vecOne.end(), print); ///algo library "for_each"
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}