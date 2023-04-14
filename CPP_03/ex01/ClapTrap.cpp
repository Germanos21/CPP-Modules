#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->aName = "Default";
	this->aAttackDamage = 0;
	this->aHitPoints = 10;
	this->aEnergyPoints = 10;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : aHitPoints(10), aEnergyPoints(10), aAttackDamage(0)
{
	this->aName = name;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	this->aName = copy.aName;
	this->aHitPoints = copy.aHitPoints;
	this->aEnergyPoints = copy.aEnergyPoints;
	this->aAttackDamage = copy.aAttackDamage;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	this->aEnergyPoints -= 1;
	if (this->aEnergyPoints == 0 || this->aHitPoints == 0)
	{
		std::cout << "ClapTrap " << this->aName << " is too tired to Attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->aName << " attacks " << target << \
	", causing " << this->aAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		return ;
	if (this->aHitPoints - amount < 0)
		this->aHitPoints = 0;
	else
		this->aHitPoints -= amount;
	std::cout << "ClapTrap " << this->aName << " took " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		return ;
	this->aEnergyPoints -= 1;
	if (this->aEnergyPoints <= 0 || this->aHitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->aName << " is too tired to repair itself!" << std::endl;
		return ;
	}
	if ((this->aHitPoints + amount) > 100)
		this->aHitPoints = 100;
	else
		this->aHitPoints += amount;
	std::cout << "ClapTrap " << this->aName << " was repaired for " << amount << " points!" << std::endl;
}
