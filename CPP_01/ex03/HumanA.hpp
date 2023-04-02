#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	&n_weapon;
public:
	HumanA(std::string Name, Weapon &n_Weapon);
	~HumanA();
	void	attack();
};

#endif