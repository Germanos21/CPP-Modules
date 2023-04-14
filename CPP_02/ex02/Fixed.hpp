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
	//Constructor and Destructor
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int Value);
	Fixed(const float Value);
	~Fixed();
	//overload
	Fixed &operator=(const Fixed &copy);
	//get and set
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	void	setRawBits(float const raw);
	//convert
	float	toFloat() const;
	int		toInt() const;
	//overload arithmetics
	Fixed operator+(const Fixed &copy) const;
	Fixed operator-(const Fixed &copy) const;
	Fixed operator*(const Fixed &copy) const;
	Fixed operator/(const Fixed &copy) const;
	//increment and decrement
	Fixed	operator--(int);
	Fixed	operator++(int);
	Fixed	operator++();
	Fixed	operator--();
	//overload comparison
	bool	operator>(const Fixed &copy) const;
	bool	operator<(const Fixed &copy) const;
	bool	operator==(const Fixed &copy) const;
	bool	operator!=(const Fixed &copy) const;
	bool	operator<=(const Fixed &copy) const;
	bool	operator>=(const Fixed &copy) const;
	//static members
	static Fixed min(Fixed &a, Fixed &b);
	static Fixed max(Fixed &a, Fixed &b);
	static Fixed min(const Fixed &a, const Fixed &b);
	static Fixed max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif