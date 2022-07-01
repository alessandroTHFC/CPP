#include "AForm.hpp"
#include "ShrubberyCreation.hpp"
#include "Bureucrat.hpp"

int main(void) {
    AForm* form1 = new shrubberyCreation("Magical Erb");
    bureucrat bCrat1("Mary-Jane", 1);

    form1->setSignature(bCrat1);
    bCrat1.executeForm(*form1);

    delete form1;

}