#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->aHitPoints = 100;
	this->aEnergyPoints = 50;
	this->aAttackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->aName = scav.aName;
	this->aHitPoints = scav.aHitPoints;
	this->aEnergyPoints = scav.aEnergyPoints;
	this->aAttackDamage = scav.aAttackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	this->aEnergyPoints -= 1;
	if (this->aEnergyPoints == 0 || this->aHitPoints == 0)
	{
		std::cout << "ScavTrap " << this->aName << " is too tired to Attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->aName << " attacks " << target << \
	", causing " << this->aAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		return ;
	if (this->aHitPoints - amount < 0)
		this->aHitPoints = 0;
	else
		this->aHitPoints -= amount;
	std::cout << "ScavTrap " << this->aName << " took " << amount << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		return ;
	this->aEnergyPoints -= 1;
	if (this->aEnergyPoints <= 0 || this->aHitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->aName << " is too tired to repair itself!" << std::endl;
		return ;
	}
	if ((this->aHitPoints + amount) > 100)
		this->aHitPoints = 100;
	else
		this->aHitPoints += amount;
	std::cout << "ScavTrap " << this->aName << " was repaired for " << amount << " points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->aName << " has entered in Gate keeper mode" << std::endl;
}