#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	Cat &operator=(const Cat &copy);
	Cat(const Cat &copy);
	~Cat();
	void	makeSound() const;
};

#endif