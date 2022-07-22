#include "easyFind.hpp"

void print(int a) {
    static int i = 0;
    std::cout << "{using for_each algo)vector index " << i << " is " << a << std::endl;
    i++;
}

int main(void) {
    ///First Try block will return value searched
    std::list<int>  listOne; //essentially a double linked list, values not stored next to each other in memory.(cannot access elements(e.g list[4]), must start iterating from front or back)
    std::vector<int> vecOne;//vector dynamically allocated array(arent of a set size and can be changed without having to move contents and create larger array)
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
        listOne.push_back(20);//populating list one value at a time
        listOne.push_back(25);
        for (int i = 15; i < 50; i +=2)//for loop to populate list
            listOne.push_back(i);
        for (auto it = listOne.begin(); it != listOne.end(); it++)///using auto keyword --The auto keyword is a placeholder for a type, but it is not itself a type.
            std::cout << "(using auto keyword/iterator) list values are: " << *it << std::endl;

        std::cout << "Value located: " << *easyFind(listOne, 50) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "<<<<<<<>>>>>>>>" << std::endl;
    ///////////////////////////////////////////
     try {
        for (int i = 5; i < 100; i += 10)///populating vector
            vecOne.push_back(i);
        std::cout << "Value located: " << *easyFind(vecOne, 95) << std::endl;
        std::for_each(vecOne.begin(), vecOne.end(), print); ///algo library "for_each"
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}