#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->aValue = 0;
}

Fixed::Fixed(const int Value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(Value);
}

Fixed::Fixed(const float Value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(Value);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->aValue = copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &copy) const
{
	Fixed result;

	result.setRawBits(this->toFloat() + copy.toFloat());
	return (result);
}

Fixed Fixed::operator-(const Fixed &copy) const
{
	Fixed result;

	result.setRawBits(this->toFloat() - copy.toFloat());
	return (result);
}

Fixed Fixed::operator*(const Fixed &copy) const
{
	Fixed result;

	result.setRawBits(this->toFloat() * copy.toFloat());
	return (result);
}

bool	Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::operator++(int)
{
	Fixed result;

	result = *this;
	this->aValue++;
	return (result);
}

Fixed Fixed::operator--(int)
{
	Fixed result;

	result = *this;
	this->aValue--;
	return (result);
}

Fixed	Fixed::operator++()
{
	this->aValue++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->aValue--;
	return (*this);
}

Fixed Fixed::operator/(const Fixed &copy) const
{
	Fixed result;

	result.setRawBits(this->toFloat() / copy.toFloat());
	return (result);
}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
	out << copy.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->aValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->aValue = raw << this->aFractionalBits;
}

void	Fixed::setRawBits(float const raw)
{
	this->aValue = roundf(raw * (1 << this->aFractionalBits));
}

float	Fixed::toFloat() const
{
	return ((float)this->aValue / (float)(1 << this->aFractionalBits));
}

int	Fixed::toInt() const
{
	return (this->aValue >> this->aFractionalBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
