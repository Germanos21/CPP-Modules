#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;
public:
	HumanB(std::string Name);
	~HumanB();
	void		setWeapon(Weapon &club);
	void		attack();
};

#endif