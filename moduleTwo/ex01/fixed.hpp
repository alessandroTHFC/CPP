#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class fixed
{
private:
    int         value;
    static  int _nbBits;

public:
    fixed(void);
    fixed(fixed const &oldObj);
    ~fixed();

    int getRedRaw(void) const;
    void    setRawBits(int const &newVal);
    fixed & operator=(fixed const &oldObj);

};
#endif