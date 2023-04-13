#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string		aName;
	long long		aHitPoints;
	long long		aEnergyPoints;
	long long		aAttackDamage;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &scav);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void 		guardGate();
};

#endif