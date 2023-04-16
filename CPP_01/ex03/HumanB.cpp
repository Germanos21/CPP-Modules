#include "HumanB.hpp"

HumanB::HumanB(std::string Name)
{
	this->name = Name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &club)
{
	this->weapon = &club;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << HumanB::weapon->getType() << std::endl;
}
