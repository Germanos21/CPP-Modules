#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = copy;
	this->brain = new Brain(*(copy.brain));
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = copy.type;
	this->brain = copy.brain;
	return (*this);
}

Brain	*Dog::getBrain() const
{
	return (this->brain);
}

void	Dog::makeSound() const
{
	std::cout << type << " woof" << std::endl;
}