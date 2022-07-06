#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <stdlib.h>
#include <cstring>

class   convert {
    private:
        std::string _str;
        int         _intValue;
        char        _charValue;
        float       _floatValue;
        double      _doubleValue;
    
    public:
        convert(void);
        convert(std::string inputString);
        convert(convert const & oldConvert);
    ///Deconstructors
        ~convert(void);
    ///Operator Overload
        convert &operator=(convert const &toCopy);
    ///Conversion Functions
        void    converting(void);
        bool    handlePseudo(void);
        void    convertDouble(void);
        void    convertFloat(void);
        void    convertChar(void);
        void    convertInt(void);
    ///Exceptions
        class invalidArguments: public std::exception 
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &stream, convert const &value);

#endif