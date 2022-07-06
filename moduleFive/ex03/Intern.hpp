#ifndef INTERN_HPP
# define INTER_HPP

#include "AForm.hpp"
#include "PresidentialPardon.hpp"
#include "VasectomyRequest.hpp"
#include "ShrubberyCreation.hpp"

class   intern {
    public:
    ///Constructors
        intern(void);
        intern(std::string name);
        intern(intern const &oldIntern);
    ///Deconstructors
        ~intern(void);
    ///Operator Overloads
        intern &operator=(intern const &toCopy);
    ///Intern Functions
        AForm* makeForm(std::string formName, std::string target);
    ///Intern Exception Classes
    class nonExistantForm: public std::exception 
        {
            public:
                virtual const char *what() const throw();
        };
    
};

#endif