#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &copy);
	WrongAnimal(const WrongAnimal &copy);
	std::string	getType() const;
	virtual void	makeSound() const;
};


#endif