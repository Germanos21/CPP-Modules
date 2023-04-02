#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Caller" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor Caller" << std::endl;
}

void	Zombie::announce()
{
	std::cout << getName() << ": Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::getName() const
{
	return (this->name);
}

void	Zombie::setName(std::string Name)
{
	this->name = Name;
}
