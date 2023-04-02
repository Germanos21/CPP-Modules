#include "Weapon.hpp"

Weapon::Weapon(std::string Type)
{
	this->type = Type;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string Type)
{
	this->type = Type;
}