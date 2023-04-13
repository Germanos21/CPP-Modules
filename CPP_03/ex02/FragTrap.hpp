#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string		aName;
	long long		aHitPoints;
	long long		aEnergyPoints;
	long long		aAttackDamage;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap	&operator=(const FragTrap &frag);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void 		highFivesGuys();
};

#endif