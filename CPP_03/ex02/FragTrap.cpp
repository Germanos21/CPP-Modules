#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->aName = name;
	this->aHitPoints = 100;
	this->aEnergyPoints = 100;
	this->aAttackDamage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->aName = frag.aName;
	this->aHitPoints = frag.aHitPoints;
	this->aEnergyPoints = frag.aEnergyPoints;
	this->aAttackDamage = frag.aAttackDamage;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	this->aEnergyPoints -= 1;
	if (this->aEnergyPoints == 0 || this->aHitPoints == 0)
	{
		std::cout << "FragTrap " << this->aName << " is too tired to Attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->aName << " attacks " << target << \
	", causing " << this->aAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		return ;
	if (this->aHitPoints - amount < 0)
		this->aHitPoints = 0;
	else
		this->aHitPoints -= amount;
	std::cout << "FragTrap " << this->aName << " took " << amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		return ;
	this->aEnergyPoints -= 1;
	if (this->aEnergyPoints <= 0 || this->aHitPoints <= 0)
	{
		std::cout << "FragTrap " << this->aName << " is too tired to repair itself!" << std::endl;
		return ;
	}
	if ((this->aHitPoints + amount) > 100)
		this->aHitPoints = 100;
	else
		this->aHitPoints += amount;
	std::cout << "FragTrap " << this->aName << " was repaired for " << amount << " points!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->aName << " tries to high five everyone!" << std::endl;
}
