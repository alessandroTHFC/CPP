#include "AForm.hpp"
#include "ShrubberyCreation.hpp"
#include "Bureucrat.hpp"

int main(void) {

    try {
        AForm* form1 = new shrubberyCreation("Magical Erb");
        bureucrat bCrat1("Mary-Jane", 1);

        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}