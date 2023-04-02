#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void		setName(std::string Name);
	std::string	getName() const;
	void		announce();
};

Zombie	*zombieHorde(int N, std::string name);
