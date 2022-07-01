#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureucrat.hpp"

class bureucrat;

class AForm {
    private:
        std::string  _name;
        bool                _isSigned;
        int           _gradeLevelSign;
        int           _gradeLevelExecution;

        public:
        ///Constructors
            AForm(void);
            AForm(const std::string name, int signGrade, int execGrade);
            AForm(AForm const &oldForm);

        ///Deconstructors
          virtual ~AForm(void);///Virtual Deconstructor To Suit Each Different Form

        ///Operator Overloading
            AForm &operator=(AForm const &toCopy);

        ///Getting/Setting
            std::string getName(void) const;
            int getSignGrade(void) const;
            int getExecGrade(void) const;
            void setSignature(bureucrat const &bCrat);

        ///Form Functions
            std::string isSigned(void) const;
            void execute(bureucrat const &bCrat) const; 
            virtual void formFunctionality(void) const = 0;

        ///Exception nestedClasses
        class gradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class gradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class formNotSignedException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
    std::ostream &operator<<(std::ostream &out, AForm const &obj);

#endif