#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string		aName;
	long aHitPoints;
	long aEnergyPoints;
	long aAttackDamage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap &operator=(const ClapTrap &copy);
	void	beRepaired(unsigned int amount);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
};

#endif
