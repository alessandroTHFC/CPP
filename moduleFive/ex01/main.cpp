#include "Forms.hpp"

int main(void) {
    try {
        Forms form1("Player Contract", 150, 150);
        bureucrat bCrat1("Richarlison", 1);
        form1.setSignature(bCrat1);
        std::cout << "Welcome to the Club" << std::endl;
        bCrat1.incrementGrade(); // this will throw the error. Everything previous will work.
    }
    catch (std::exception &e) {
        std::cout << "About to print the exception" << std::endl;
        std::cout << e.what() << std::endl;
    }
    //////////////////////////////////
    //////////////////////////////////
    std::cout  << "<<<<<<<<<<<<>>>>>>>>>>>" << std::endl;
    try {
        Forms form1("Drivers License", 1, 1); ///this whole code block will fail, Caitlyn Jenner shouldnt be driving;
        std::cout << form1;
        bureucrat bCrat1("Caitlyn Jenner", 150);
        form1.setSignature(bCrat1);
    }
    catch (std::exception &e) {
        std::cout << "About to print the exception" << std::endl;
        std::cout << e.what() << std::endl;
    }
}