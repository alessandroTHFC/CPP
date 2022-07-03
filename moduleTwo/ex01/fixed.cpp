#include "fixed.hpp"
#include <iostream>
#include <fstream>
#include <cmath>

//////////////////
// Constructors //
//////////////////

fixed::fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
	return ;
}

fixed::fixed(int x)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = x << fixed::_nbBits;
	return ;
}

fixed::fixed(float const x)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = int(roundf(x * (1 << fixed::_nbBits)));
	return ;
}

fixed::fixed(fixed const &oldObj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = oldObj.getRedRaw();
	return ;
}

/////////////////////
// Deconstructors //
////////////////////

fixed::~fixed(void)
{
	std::cout << "Deconstructor Called" << std::endl;
	return ;
}

//////////////////////////
// Operator Overload //
//////////////////////////

fixed	& fixed::operator=(fixed const &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = toCopy.getRedRaw();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, fixed const &fixed)
{
	output << fixed.toFloat();
	return (output);
}

///////////////////////
// Memeber functions //
///////////////////////

int		fixed::getRedRaw(void) const
{
	return (this->value);
}

float	fixed::toFloat(void) const
{
	return ((float)(this->value) / (1 << fixed::_nbBits));
}

int		fixed::toInt(void) const
{
	return (this->value >> fixed::_nbBits);
}
