#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

std::string Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
	return (this->ideas[i]);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
