#include "base.hpp"
////////////////
///Base Class///
////////////////
base::base(void) {
    std::cout << "base class constructor called" << std::endl;
}

base::~base(void) {
    std::cout << "base class deconstructed" << std::endl;
}
/////////////
///A Class///
/////////////
A::A(void): base() {
    std::cout << "Type A Constructed" << std::endl;
}

A::~A(void){
    std::cout << "Type A deconstructed" << std::endl;
}
/////////////
///B Class///
/////////////
B::B(void): base() {
    std::cout << "Type B Constructed" << std::endl;
}

B::~B(void){
    std::cout << "Type B deconstructed" << std::endl;
}
/////////////
///C Class///
/////////////
C::C(void): base() {
    std::cout << "Type C Constructed" << std::endl;
}

C::~C(void){
    std::cout << "Type C deconstructed" << std::endl;
}
///////////////////////////////
///Generation&Identification///
///////////////////////////////
base*    generateSubClass(void) {
    srand(time(NULL));
    base    *classP;
    int randomNum = rand() % 3;
    switch(randomNum) {
        case(0):  {
            classP = new A();
            break; }
        case(1):  {
            classP = new B();
            break ; }
        case(2):  {
            classP =  new C();
            break ;}
    }
    return (classP);
}

void    identify(base *ptr) {
    ///Declaring pointers and if ptr argument can be successfully cast to that type
    A   *pA = dynamic_cast<A *>(ptr);///Checking if ptr is orginally of Type A
    if(pA)
        std::cout << "This is a pointer to a Type A Instance" << std::endl;
    
    B   *pB = dynamic_cast<B *>(ptr);
    if(pB)
        std::cout << "This is a pointer to a Type B Instance" << std::endl;

    C   *pC = dynamic_cast<C *>(ptr);
    if(pC)
        std::cout << "This is a pointer to a Type C Instance" << std::endl;
    std::cout << std::endl;
}

void    identify(base &ref) {
    ///Checking if ref argument is originally of Type A
    try {
        A   &refA = dynamic_cast<A &>(ref);
        (void)refA;
        std::cout << "This is a Reference to an A Type" << std::endl;
    }
    catch(std::exception &e){}; ///If cast fails will collect an error and move onto next block
    ////Checking if ref is originally of Type B
    try {
        B   &refB = dynamic_cast<B &>(ref);
        (void)refB;
        std::cout << "This is a Reference to an B Type" << std::endl;
    }
    catch(std::exception &e){};
    ///Checking if ref is originally of Type C
    try {
        C   &refC = dynamic_cast<C &>(ref);
        (void)refC;
        std::cout << "This is a Reference to an C Type" << std::endl;
    }
    catch(std::exception &e){};
}