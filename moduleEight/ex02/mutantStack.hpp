#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>

///setting up this template class with 2 types, T which will represent the potential data type used and
///creating typename Container and making it equal to Stacks default underlying container deque.
///NOTE- Stack is not a normal container but a container adaptor that acts as an interface to the underlying container.
///this underlying container gives added functionality, namely how we are then able to iterate through the stack
///Which as per the point of this exercise is not actually iterable. 

template <typename T, typename Container = std::deque<T>> 
class mutantStack: public std::stack<T, Container>
{
    public:
    //////////////////
    ///Constructors///
    //////////////////
        mutantStack(void) {
            std::cout << "mutantStack Constructed" << std::endl;
        }

        mutantStack(mutantStack<T, Container> const &oldStack) {
            *this = oldStack;
            std::cout << "mutantStack Copy Constructed" << std::endl;
        }

    ////////////////////
    ///Deconstructor///
    ///////////////////
        ~mutantStack(void) {
            std::cout << "mutantStack has been deconstructed" << std::endl;
        }

    ///////////////////////
    ///Operator Overload///
    ///////////////////////
        mutantStack<T> &operator=(mutantStack<T, Container> const &toCopy) {
            *this = toCopy;
            std::cout << "Assignment Operator has been overloaded successfully" << std::endl;
            return(*this);
        }

    ////////////////////    
    ///Iterator Alias///
    ////////////////////

    ///Alternate way of declaring this iterator type would be as follows

/// typedef typename std::stack<T>::container_type::iterator    iterator;

    ///However, by introducing the Container in the template typename at the top,
    ///We can declutter a bit and have a shorter nicer looking syntax
    typedef typename Container::iterator    iterator;
    typedef typename Container::iterator    reverse_iterator; 

    iterator    begin(void) {
        return (this->c.begin());
    }

    iterator    end(void) {
        return (this->c.end());
    }

    reverse_iterator    rbegin(void) {
        return (this->c.rbegin());
    }

    reverse_iterator    rend(void) {
        return (this->c.rend());
    }
};

#endif