#include "Cat.hpp"

Cat::Cat(/* args */)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = copy.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << type << " MEOWWWWWWWWWWWWWs" << std::endl;
}
