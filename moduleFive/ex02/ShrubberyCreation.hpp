#ifndef SHRUBBERYCREATION_HPP
# define SHRUBBERYCREATION_HPP

#include "AForm.hpp"

class   shrubberyCreation: public AForm {
    private:
        std::string _target;
    public:
    ///Constructors
        shrubberyCreation(void);
        shrubberyCreation(std::string _target);
        shrubberyCreation(shrubberyCreation const &oldShrub);
    ///Deconstructor
        ~shrubberyCreation(void);
    ///Operator Overloads
        shrubberyCreation &operator=(shrubberyCreation const &oldShrub);
    ///Shrub Getters
        std::string    getTarget(void) const;
    ///Shrub Exceptions
        class shrubFileCantOpen: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    ///Shrub Functions
        void formFunctionality(void) const;
};
        std::ostream &operator<<(std::ostream &out, shrubberyCreation const &shrub);
#endif