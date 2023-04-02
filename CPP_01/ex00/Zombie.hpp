#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void		announce();
	void		setname(std::string Name);
	std::string	getname() const;
};

void	randomChump(std::string name);

Zombie *newZombie(std::string name);
