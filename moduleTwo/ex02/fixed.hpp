#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class fixed
{
private:
    int         value;
    static  int _nbBits;

public:
//constructors
    fixed(void);
    fixed(fixed const &oldObj);
    fixed(int const num);
    fixed(float const fnum);
//deconstructor
    ~fixed();
//overloading
    fixed & operator=(fixed const &oldObj);
    bool    fixed::operator==(const fixed &obj2);
    bool    fixed::operator<=(const fixed &obj2);
    bool    fixed::operator>=(const fixed &obj2);
    bool    fixed::operator!=(const fixed &obj2);
    bool    fixed::operator>(const fixed &obj2);
    bool    fixed::operator<(const fixed &obj2);
    fixed   fixed::operator*(const fixed &obj2);
    fixed   fixed::operator+(const fixed &obj2);
    fixed   fixed::operator-(const fixed &obj2);
    fixed   fixed::operator/(const fixed &obj2);


    int getRedRaw(void) const;
    void    setRawBits(int const &newVal);

};
#endif