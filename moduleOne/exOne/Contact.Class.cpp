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
        while (1) {
            std::cout << "Enter your " << prompt;
            std::cin >> contactInfo;
            if (contactInfo != "" && contactInfo != " ")
                break;
        }        
        std::cout << "Confirming Result as: " << contactInfo << std::endl;
}

void    Contact::printEntry(Contact &contactEntry){
    std::cout << "First Name is: " << contactEntry.firstName << std::endl;
    std::cout << "Last Name is: " << contactEntry.lastName << std::endl;
    std::cout << "Nickname is: " << contactEntry.nickName << std::endl;
    std::cout << "Phone Number is: " << contactEntry.phoneNumber << std::endl;
    std::cout << "Darkest Secret is: " << contactEntry.darkestSecret << std::endl;
    return;
}

void    Contact::printContacts(Contact *contactEntry, int i) {
    int j = 0;
    std::string first_name;
    std::string last_name;
    std::string _nickname;
    std::cout << std::setw(10) << "|  index   |"
	<< std::setw(10) << "  f_name  |"
	<< std::setw(10) << "  l_name  |"
	<< std::setw(10) << "   nick   |" << std::endl;
	std::cout << "————————————————————————————————————————————" << std::endl;
    while (j++ < i)
    {
        first_name = contactEntry[j].firstName;
        last_name = contactEntry[j].lastName;
        _nickname = contactEntry[j].nickName;
        std::cout << "|" << std::setw(10) << j;
        std::cout << "|" << std::setw(10) << first_name;
        std::cout << "|" << std::setw(10) << last_name;
        std::cout << "|" << std::setw(10) << _nickname << std::endl;
    } 
    std::cout << "Input Desired Contact's Index Number: ";
    std::cin >> j;
    std::cout << "Selected index is " << j << std::endl;
    if (j <= i)
        Contact::printEntry(contactEntry[j]);
    else
        std::cout << "Invalid Index Number" << std::endl;
    return ;
}

