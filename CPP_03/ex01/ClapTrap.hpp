#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string		aName;
	unsigned int	aHitPoints;
	unsigned int	aEnergyPoints;
	unsigned int	aAttackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &clap);
	void		beRepaired(unsigned int amount);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
};

#endif