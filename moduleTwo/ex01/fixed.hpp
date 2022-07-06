#ifndef FIXED_HPP
#define FIXED_HPP

#include <fstream>

class fixed
{
	public:
		// Constructors
		fixed(void);
		fixed(int x);
		fixed(float const x);
		fixed(fixed const &oldObj);

		// Destructors
		~fixed(void);

		// Overloaded operators
		fixed	&operator=(fixed const & rhs);

		// Member functions
		int		getRedRaw(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					value;
		static int const	_nbBits = 8;
};

std::ostream	&operator<<(std::ostream &output, fixed const &fixed);

#endif