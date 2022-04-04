#include "Contact.Class.hpp"

int main(void)
{
    int i = 0;
    std::string command;
    Contact     contactEntry[8];

    while (1) {
        
        std::cout << "Enter Command (Add, Search, Exit): ";
        std::cin >> command;
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
        else if (command == "Search") {
            if (i > 0)
                Contact::printContacts(contactEntry, i);
            else
                std::cout << "No Contacts to Search, Add Some First" << std::endl;
        }
        else if (command == "Exit")
            break;
        else 
            std::cout << "Invalid Command" << std::endl;
    }
    return(0);
}