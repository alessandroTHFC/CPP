#include <iostream>

int main(void) { ///All have same memory address;

    std::string     stringVar = "HI THIS IS BRAIN";
    std::string*    stringPtr = &stringVar;
    std::string&    stringRef = stringVar; 

    std::cout << "Memory address for stringVar is " << &stringVar << std::endl;
    std::cout << "Memory address for stringPtr is " << stringPtr << std::endl;
    std::cout << "Memory address for stringRef is " << &stringRef << std::endl;

    std::cout << "Value for stringVar is " << stringVar << std::endl;
    std::cout << "Value for stringPtr is " << *stringPtr << std::endl;
    std::cout << "Value for stringPtr is " << stringRef << std::endl;
}