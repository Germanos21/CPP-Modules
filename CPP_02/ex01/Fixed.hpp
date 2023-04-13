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
	Fixed(const int Value);
	Fixed(const float Value);
	Fixed(const Fixed &copy);
	~Fixed();
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	void	setRawBits(float const raw);
	float	toFloat() const;
	int		toInt() const;
	Fixed &operator=(const Fixed &copy);
};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif