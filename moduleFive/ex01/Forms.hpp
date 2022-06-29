#ifndef FORMS_HPP
# define FORMS_HPP

#include <iostream>
#include "Bureucrat.hpp"

class Forms {
    private:
        std::string const   _name;
        bool                _isSigned;
        const int           _gradeLevelSign;
        const int           _gradeLevelExecution;

        public:
        ///Constructors
            Forms(void);
            Forms(const std::string name, int signGrade, int execGrade);
            Forms(Form const &oldForm);
        ///Deconstructors
            ~Forms(void);
        ///Operator Overloading
            Forms &operator=(Form const &toCopy);
        ///Getting/Setting
            std::string getName(void) const;
            int getSignGrade(void) const;
            int getExecGrade(void) const;
            void setSignature(bureucrat const &bCrat);
        ///Form Functions
            bool isSigned(void) const;
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
        std::ostream &operator<<(std::ostream &stream, bureucrat const &bCrat);

#endif