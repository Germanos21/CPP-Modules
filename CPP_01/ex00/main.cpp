#include "Zombie.hpp"

int main()
{
	Zombie *zombie1, *zombie2, *zombie3;

	zombie1 = newZombie("Zombie1");
	zombie2 = newZombie("Zombie2");
	zombie3 = newZombie("Zombie3");

	zombie1->announce();
	zombie2->announce();
	zombie3->announce();

	randomChump("Random Zombie4");
	randomChump("Random Zombie5");
	randomChump("Random Zombie6");

	delete zombie1;
	delete zombie2;
	delete zombie3;

	return (0);
}
