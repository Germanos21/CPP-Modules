#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called" << std::endl;
}

void Zombie::setname(std::string Name)
{
	this->name = Name;
}

std::string	Zombie::getname() const
{
	return (this->name);
}

void	Zombie::announce()
{
	std::cout << getname() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
