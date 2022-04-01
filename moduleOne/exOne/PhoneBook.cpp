#include "Contact.Class.hpp"

int main(void)
{
    int i = 0;
    std::string command;
    Contact     contactEntry[8];

    while (command != "Exit") {
        
        std::cout << "Enter Command (Add, Search, Exit): ";
        std::getline(std::cin, command);
        if (command == "Add") {
            if (++i < 8) {
                contactEntry[i].indexPos = i;
                Contact::addContact(contactEntry[i]);
            }    
            else {
                std::cout << "Phonebook is full, Overwriting Contact 1" << std::endl;
                Contact::addContact(contactEntry[1]);
            }    
        }
    }
    return(0);
}