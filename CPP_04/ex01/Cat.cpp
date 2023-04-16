#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = copy;
	this->brain = new Brain(*(copy.brain));
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = copy.getType();
	this->brain = copy.getBrain();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);
}

void	Cat::makeSound() const
{
	std::cout << type << " MEOWWWWWWWWWWWWWs" << std::endl;
}