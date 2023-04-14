#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					aValue;
	static const int	aFractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	~Fixed();
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};


#endif