#include "AForm.hpp"
#include "ShrubberyCreation.hpp"
#include "PresidentialPardon.hpp"
#include "VasectomyRequest.hpp"
#include "Bureucrat.hpp"

int main(void) {
    //////////Testing ShrubberyCreation for Success
    try {
        AForm* form1 = new shrubberyCreation("Magical Erb");
        bureucrat bCrat1("Mary-Jane", 1);
        std::cout << bCrat1;
        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    //////////Testing ShrubberyCreation for Failure
    try {
        AForm* form1 = new shrubberyCreation("Magical Erb");
        bureucrat bCrat1("Mary-Jane", 1);
        std::cout << bCrat1;
        bCrat1.setSignGrade(50);
        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    //////////Testing VasectomyRequest for Failure
    try {
        AForm* form1 = new vasectomyRequest("Bruce Jenner");
        bureucrat bCrat1("Kim K", 150);
        std::cout << bCrat1;
        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    /////Testing VasectomyRequest for Success
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    try {
        AForm* form1 = new vasectomyRequest("Bruce Jenner");
        bureucrat bCrat1("Kim K", 150);
        std::cout << bCrat1;
        bCrat1.setSignGrade(1);
        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    /////Testing PresidentialPardon for Success
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    try {
        AForm* form1 = new presidentialPardon("Julian Assange");
        bureucrat bCrat1("Joe Biden", 150);
        std::cout << bCrat1;
        bCrat1.setSignGrade(1);
        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    /////Testing PresidentialPardon for Failure
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    try {
        AForm* form1 = new presidentialPardon("Julian Assange");
        bureucrat bCrat1("Joe Biden", 150);
        std::cout << bCrat1;
        
        form1->setSignature(bCrat1);
        bCrat1.executeForm(*form1);

        delete form1;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}