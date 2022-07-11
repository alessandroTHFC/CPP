#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>


template<typename T>
class whatever
{
private:
    T  *_array;
    unsigned int *_Ooo;
public:
///Constructors
    whatever(void);
    whatever(unsigned int Oo);
    whatever(whatever<T> const &oldArray);
///Destructor
    ~whatever(void);
///Operator Overload
    whatever<T> &operator=(whatever<T> const &toCopy);
    T  &operator[](unsigned int size);
///Getters
    unsigned int getSize(void) const;
    void    setArray(T value) const;
    void    printArrayContents(unsigned int index);
///Exception Class
    class youBeingNaughtyByNature: public std::exception {
        char const *what(void) const throw();
    };
};
#endif