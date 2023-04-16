#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("ClapTrap");
	ClapTrap	b(a);
	ClapTrap	c;

	c = b;
	a.attack("b");
	b.takeDamage(9);
	b.beRepaired(100);
	c.attack("a");
	a.takeDamage(10);
	a.beRepaired(5);
	return (0);
}
