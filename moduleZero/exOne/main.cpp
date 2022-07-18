#include "Contact.Class.hpp"

int main(void)
{
    int i = 0;
    std::string command;
    Contact     contactEntry[10];

    while (1) { //Phonebook in infinite loop unless exited properly;
        
        std::cout << "Enter Command (Add, Search, Exit): ";
        std::cin >> command;
        if (command == "Add") {
            if (i < 8) {
                contactEntry[i].indexPos = i;
                contactEntry[i].addContact();
                i++;
            }    
            else {
                std::cout << "Phonebook is full, Overwriting Contact 1" << std::endl;
                Contact::removeContact(contactEntry[i]);
                contactEntry[i].addContact();
                contactEntry[0] = contactEntry[i];
            } 
            std::cout << "index number " << i << std::endl; 
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