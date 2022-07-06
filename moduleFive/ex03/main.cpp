#include "Intern.hpp"

int main(void) {
    try {
        intern  someRandomIntern;
        AForm*  someRandomForm;

        someRandomForm = someRandomIntern.makeForm("shrubberyCreation", "Snoop");
        std::cout << *someRandomForm;
        delete someRandomForm;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    ///////////Failure Test
    std::cout << "----------------------" << std::endl;
    std::cout << "----------------------" << std::endl;
    try {
        intern  someRandomIntern;
        AForm*  someRandomForm;

        someRandomForm = someRandomIntern.makeForm("playerContract", "Harry");
        std::cout << *someRandomForm;
        delete someRandomForm;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}