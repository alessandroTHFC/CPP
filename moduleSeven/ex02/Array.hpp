#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>


template<typename T>
class hipHopArray
{
private:
    T  *_array;
    unsigned int _Hooo;
    unsigned int _currIdx;
public:
///Constructors
    hipHopArray(void);
    hipHopArray(unsigned int Oo);
    hipHopArray(hipHopArray<T> const &oldArray);
///Destructor
    ~hipHopArray(void);
///Operator Overload
    hipHopArray<T> &operator=(hipHopArray<T> const &toCopy);
    T  &operator[](unsigned int size);
///Getters
    unsigned int getSize(void) const;
    void    setArray(T value);
    void    printArrayContents(void);
///Exception Class
    class youBeingNaughtyByNature: public std::exception {
        char const *what(void) const throw();
    };
};


//////////////////
///Constructors///
//////////////////
template <typename T>
hipHopArray<T>::hipHopArray(void) {
    this->_array = NULL;
    this->_Hooo = 0;
    this->_currIdx = 0;
}

template <typename T>
hipHopArray<T>::hipHopArray(unsigned int size) {
    this->_array = new T[size];
    this->_Hooo = size;
    this->_currIdx = 0;
    std::cout << "New hHA Object of size: " << size << std::endl;
    std::cout << "With that in mind..There's many hungry Hip Hoppers one reason Hip Hop's tip-top today" << std::endl;
    std::cout << "Swerve what ya heard cause I ain't bailing no hay" << std::endl;
    std::cout << "Ain't chopping no crops, but still growing every day" << std::endl;
}

template <typename T>
hipHopArray<T>::hipHopArray(hipHopArray const &oldhipHopArray) {
    this->_currIdx = 0;
    this->_Hooo = oldhipHopArray._Hooo;
    this->_array = new hipHopArray[this->_Hooo];
    for(int i = 0; i < this._Hooo; i++)
        this->array[i] = oldhipHopArray._array[i];
    
    
}
///////////////////
///Deconstructor///
///////////////////
template <typename T>
hipHopArray<T>::~hipHopArray(void){
    std::cout << "I live and die for Hip Hop this is Hip Hop for today" << std::endl;
       std::cout << "I give props to hip-hop so Hip Hop hooray, hey, ho.....deconstructed" << std::endl;
       delete [] _array;
}

////////////////////////
///Operator Overloads///
////////////////////////
template <typename T>
hipHopArray<T> &hipHopArray<T>::operator=(hipHopArray const &toCopy) {
    if(this->_array)
            delete [] this->_array;///Free original array
        this->_Hooo = toCopy._Hooo;
        this->_currIdx = toCopy._currIdx;
        if (this->_Hooo) { ///if there is a size
            this->_array = new T[this->_Hooo];///create new array of new size
            for(unsigned int i = 0; i < this->_Hooo; i++)
                this->_array[i] = toCopy._array[i];///copy contents;
        }
        std::cout << "= Operator overloaded. New object " << std::endl;
    return (*this);
}

template<typename T>
T &hipHopArray<T>::operator[](unsigned int size) {
    if(size >= _Hooo)
        throw hipHopArray::youBeingNaughtyByNature();
    else
        return (this->_array[size]);
}

/////////////
///Getters///
/////////////
template <typename T>
unsigned int hipHopArray<T>::getSize(void) const {
    return(this->_Hooo);
}

template <typename T>
void    hipHopArray<T>::setArray(T const value) {
    if(this->_array) {
        this->_array[_currIdx] = value;
        _currIdx += 1;
        std::cout << "Value set at hipHopArray index of: " << this->_currIdx << std::endl;
    }
}


template <typename T>
void    hipHopArray<T>::printArrayContents(void){
    for (unsigned int i = 0; i < _currIdx; i++) {
            std::cout << "Array index " << i << " value: " << _array[i] << std::endl;
    }
}

////////////////
///Exceptions///
////////////////
template <typename T>
char const* hipHopArray<T>::youBeingNaughtyByNature::what() const throw() {
    return("You're being Naughty By Nature, that index doesnt exist");
}
#endif