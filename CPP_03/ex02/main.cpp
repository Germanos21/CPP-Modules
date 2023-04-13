#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap test1("asdf");

	test1.attack("fish");
	std::cout << std::endl;
	test1.takeDamage(1);
	std::cout << std::endl;
	test1.beRepaired(1004);
	std::cout << std::endl;
	test1.highFivesGuys();
	std::cout << std::endl;
	return 0;
}