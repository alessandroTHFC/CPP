#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <iostream>
#include <vector>

class   valueNotFound: public std::exception {
    public:
    const char *what(void) const throw(){
        return("The value that you're looking for is not in this container");
    }
};


//Function that returns the value being searched;
template <typename T>
typename T::iterator    easyFind(T &container, int value) {
    typename T::iterator n;              

    n = std::find(container.begin(), container.end(), value); // using <algorithm> "find". Returns the n of value;
    if (n == container.end())//end is 1 index pos after the end (almost like null terminator). if it equals end then its gone through the list without finding it.
        throw valueNotFound();
    return(n);
}

///////////////////////////////
////Useful topics for this ////
///////////////////////////////

///Range based for loop. 
///for_each
///iterators
///C++ algorithms
///STL containers (Vectors, Maps, Lists, etc.)
#endif