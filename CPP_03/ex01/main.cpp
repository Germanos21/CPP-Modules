#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	
	ScavTrap test1("asdf");

	test1.attack("fish");
	std::cout << std::endl;
	test1.takeDamage(1);
	std::cout << std::endl;
	test1.beRepaired(1004);
	std::cout << std::endl;
	test1.guardGate();
	std::cout << std::endl;
	return 0;
}