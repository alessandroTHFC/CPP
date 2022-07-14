#include "Array.hpp"

//////////////////
///Constructors///
//////////////////
template <typename T>
whatever<T>::whatever(void) {
    this->_array = NULL;
    this->_Ooo = 0;
}

template <typename T>
whatever<T>::whatever(unsigned int size) {
    this->_array = new T[size] ;
    this->_Ooo = size;
    std::cout << "New hHA Object of size: " << size << std::endl;
    std::cout << "With that in mind..There's many hungry Hip Hoppers one reason Hip Hop's tip-top today" << std::endl;
    std::cout << "Swerve what ya heard cause I ain't bailing no hay" << std::endl;
    std::cout << "Ain't chopping no crops, but still growing every day" << std::endl;
}

template <typename T>
whatever<T>::whatever(whatever const &oldWhatever) {
    this->_Ooo = oldWhatever._Ooo;
    this->_array = new whatever[this->_Ooo];
    for(int i = 0; i < this._Ooo; i++)
        this->array[i] = oldWhatever._array[i];
}
///////////////////
///Deconstructor///
///////////////////
template <typename T>
whatever<T>::~whatever(void){
    std::cout << "I live and die for Hip Hop his is Hip Hop for today" << std::endl;
       std::cout << "I give props to hip-hop so Hip Hop hooray, hey, ho.....deconstructed" << std::endl;
       delete [] _array;
}

////////////////////////
///Operator Overloads///
////////////////////////
template <typename T>
whatever<T> &whatever<T>::operator=(whatever const &toCopy) {
    if (this != *toCopy)
    {
        if(this->_array)
            delete [] this->_array;///Free original array
        this->_Ooo = toCopy._Ooo;
        if (this->*_Ooo) { ///if there is a size
            this->_array = new T[this->_Ooo];///create new array of new size
            for(unsigned int i = 0; i < this->*_Ooo; i++)
                this->_array[i] = toCopy._array[i];///copy contents;
        }
    }
    return (*this);
}

template<typename T>
T &whatever<T>::operator[](unsigned int size) {
    if(size >= _Ooo)
        throw whatever::youBeingNaughtyByNature();
    else
        return (this->_array[size]);
}

/////////////
///Getters///
/////////////
template <typename T>
unsigned int whatever<T>::getSize(void) const {
    return(this->_Ooo);
}

template <typename T>
void    whatever<T>::setArray(T const value) const {
    if(this->_array) {
        for (unsigned int i = 0; i < _Ooo; i++) {
           if (this->_array[i].empty()) {
                this->_array[i] = value;
                std::cout << "Value set at whatever index of: " << i << std::endl;
           }
            else
                i++;
        }
    }
    else
        _array[0] = value;
}

template <typename T>
void    whatever<T>::printArrayContents(void){
    unsigned int i = 0;
        while (i < _Ooo) {
            if(!_array[i].empty())
                std::cout << _array[i] << std::endl;
            else
            i++;
        }
}

////////////////
///Exceptions///
////////////////
template <typename T>
char const* whatever<T>::youBeingNaughtyByNature::what() const throw() {
    return("whatever Element of that index doesnt exist");
}