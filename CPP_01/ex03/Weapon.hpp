#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string Type);
	~Weapon();
	std::string	getType() const;
	void	setType(std::string Type);
};

#endif
