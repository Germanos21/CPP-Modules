#include "Zombie.hpp"

int main()
{
	int	N = 100000;
	Zombie	*horde = zombieHorde(N, "Horde");
	if (horde == NULL)
		return (1);
	delete [] horde;
	return (0);
}