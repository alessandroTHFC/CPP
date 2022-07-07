#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <stdlib.h>

/////////CLASSES///////////
class base ///base class has virtual 
{
public:
    base(void);
   virtual ~base();
};

class A: public base{
    public:
        A(void);
        ~A(void);
};

class B: public base{
    public:
        B(void);
        ~B(void);
};

class C: public base{
    public:
        C(void);
        ~C(void);
    };

//////////FUNCTIONS//////////
base*   generateSubClass(void);
void    identify(base *p);
void    identify(base &p);

#endif