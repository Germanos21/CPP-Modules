#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
private:
public:
	Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	~Animal();
protected:
	std::string	type;
};


#endif