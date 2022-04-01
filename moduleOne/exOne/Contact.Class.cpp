#include "Contact.Class.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void){
    return;
}

void    Contact::addContact(Contact &contactEntry) {
    contactEntry.getInfo("FirstName: ", contactEntry.firstName);
    contactEntry.getInfo("LastName: ", contactEntry.lastName);
    contactEntry.getInfo("Nickname: ", contactEntry.nickName);
    contactEntry.getInfo("PhoneNumber: ", contactEntry.phoneNumber);
    contactEntry.getInfo("DarkestSecret: ", contactEntry.darkestSecret);
    return;
}

void    Contact::getInfo(std::string prompt, std::string &contactInfo) {
    std::cout << "Enter your" << prompt;
    std::getline(std::cin, contactInfo);
    std::cout << "Confirming Result as: " << contactInfo << std::endl;
}