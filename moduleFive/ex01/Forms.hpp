#ifndef FORMS_HPP
# define FORMS_HPP

#include <iostream>
#include "Bureucrat.hpp"

class Forms {
    private:
        std::string  _name;
        bool                _isSigned;
        int           _gradeLevelSign;
        int           _gradeLevelExecution;

        public:
        ///Constructors
            Forms(void);
            Forms(const std::string name, int signGrade, int execGrade);
            Forms(Forms const &oldForm);
        ///Deconstructors
            ~Forms(void);
        ///Operator Overloading
            Forms &operator=(Forms const &toCopy);
        ///Getting/Setting
            std::string getName(void) const;
            int getSignGrade(void) const;
            int getExecGrade(void) const;
            void setSignature(bureucrat const &bCrat);
        ///Form Functions
            std::string isSigned(void) const;
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
};
    std::ostream &operator<<(std::ostream &out, Forms const &obj);

#endif