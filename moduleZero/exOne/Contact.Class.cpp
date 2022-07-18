#include "Contact.Class.hpp"

Contact::Contact(void) {
    return;
}

Contact::~Contact(void){
    return;
}

void    Contact::addContact(void) { ///constructor calls getInfo on each private attribute;
    this->getInfo("FirstName: ", this->firstName);
    this->getInfo("LastName: ", this->lastName);
    this->getInfo("Nickname: ", this->nickName);
    this->getInfo("PhoneNumber: ", this->phoneNumber);
    this->getInfo("DarkestSecret: ", this->darkestSecret);
    return;
}

void    Contact::getInfo(std::string prompt, std::string &contactInfo) {
        std::cout << "Enter your " << prompt;//Prints the prompt;
        while(contactInfo.empty()) {
            std::getline(std::cin, contactInfo); //Waits for input which is output into contact info slot, breaks loop;
        }
        std::cout << "Confirming Result as: " << contactInfo << std::endl; //Prints confirmation of input;
}

void    Contact::printEntry(Contact &contactEntry){ ///Prints attributes of refrenced contact entry;
    std::cout << "First Name is: " << contactEntry.firstName << std::endl; 
    std::cout << "Last Name is: " << contactEntry.lastName << std::endl;
    std::cout << "Nickname is: " << contactEntry.nickName << std::endl;
    std::cout << "Phone Number is: " << contactEntry.phoneNumber << std::endl;
    std::cout << "Darkest Secret is: " << contactEntry.darkestSecret << std::endl;
    return;
}

std::string    Contact::truncateTxt(std::string text) { //Function resizes entry fields to fit 10 char limit;
    if(text.length() > 10) {
        text.resize(9);
        text.resize(10, '.');
    }
    return (text);
}

void    Contact::printContacts(Contact *contactEntry, int i) { //Function prints contact entry into formatted display;
    int j = 0;

    std::cout << std::setw(10) << "|  index   |"
	<< std::setw(10) << "  f_name  |"
	<< std::setw(10) << "  l_name  |"
	<< std::setw(10) << "   nick   |" << std::endl;
	std::cout << "————————————————————————————————————————————" << std::endl;
    while (j++ < i)
    {
        std::string first_name = contactEntry[j].firstName;//sets entry values as local strings;
        std::string last_name = contactEntry[j].lastName;
        std::string _nickname = contactEntry[j].nickName;
        std::cout << "|" << std::setw(10) << j;
        std::cout << "|" << std::setw(10) << Contact::truncateTxt(first_name);//Truncates to size limit and prints;
        std::cout << "|" << std::setw(10) << Contact::truncateTxt(last_name);
        std::cout << "|" << std::setw(10) << Contact::truncateTxt(_nickname) << std::endl;
    } 
    std::cout << "Input Desired Contact's Index Number: "; //Get input of entry to be seen in more detail;
    std::cin >> j;
    std::cout << "Selected index is " << j << std::endl;//Confirm number
    if (j <= i)
        Contact::printEntry(contactEntry[j]);//Use Print Function to display;
    else 
        std::cout << "Invalid Index Number" << std::endl;
    return ;
}

void    Contact::removeContact(Contact &contactEntry) {
    contactEntry.firstName.clear();
    contactEntry.lastName.clear();
    contactEntry.nickName.clear();
    contactEntry.phoneNumber.clear();
    contactEntry.darkestSecret.clear();
}

