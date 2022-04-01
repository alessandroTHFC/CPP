#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact {

    private:
        std::string     firstName;
        std::string     lastName;
        std::string     nickName;
        std::string     phoneNumber;
        std::string     darkestSecret;

        void    getInfo(std::string prompt, std::string &contactInfo);
        
    public:
        int             indexPos;
        static void addContact(Contact &contactEntry);

        Contact(void);
        ~Contact(void);

};

#endif