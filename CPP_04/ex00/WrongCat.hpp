#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &copy);
	void	makeSound() const;
};

#endif