#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

    private:
        std::string     firstName;
        std::string     lastName;
        std::string     nickName;
        std::string     phoneNumber;
        std::string     darkestSecret;

        void    getInfo(std::string prompt, std::string &contactInfo);
        static void    printEntry(Contact &contractEntry);
        static std::string    truncateTxt(std::string text);
        
    public:
        int             indexPos;
        void addContact(void);
        static void printContacts(Contact *contactEntry, int i);
        static void removeContact(Contact &contactEntry);

        Contact(void);
        ~Contact(void);

};

#endif