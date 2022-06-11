#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class fixed
{
private:
    int         value;
    static  int const _nbBits = 8;

public:
//constructors
    fixed(void);
    fixed(fixed const &oldObj);
    fixed(int const num);
    fixed(float const fnum);
//deconstructor
    ~fixed(void);
//operator overloading
    fixed&  operator=(fixed const &oldObj);
    bool    operator==(const fixed &obj2);
    bool    operator<=(const fixed &obj2);
    bool    operator>=(const fixed &obj2);
    bool    operator!=(const fixed &obj2);
    bool    operator>(const fixed &obj2);
    bool    operator<(const fixed &obj2);
    fixed   operator*(const fixed &obj2);
    fixed   operator+(const fixed &obj2);
    fixed   operator-(const fixed &obj2);
    fixed   operator/(const fixed &obj2);
    fixed&  operator++(void);
    fixed&  operator--(void);
    fixed   operator++(int);
    fixed   operator--(int);
//function overloading
    fixed   static  &min(fixed &n1, fixed &n2);
    fixed   static const &min(fixed const &n1, fixed const &n2);
    fixed   static  &max(fixed &n1, fixed &n2);
    fixed   static const &max(fixed const &n1, fixed const &n2);
//getting & setting
    int     getRedRaw(void) const;
    void    setRawBits(int const &newVal);
//conversion
    float   toFloat(void) const;
    int     toInt(void) const;
};

//stream overloading
    std::ostream& operator<<(std::ostream &output, const fixed &obj);
#endif