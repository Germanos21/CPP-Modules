#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &weapon): n_weapon(weapon)
{
	this->name = Name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->n_weapon.getType() << std::endl;
}
