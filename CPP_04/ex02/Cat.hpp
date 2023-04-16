#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat &operator=(const Cat &copy);
	Cat(const Cat &copy);
	~Cat();
	void	makeSound() const;
	Brain	*getBrain() const;
	std::string getType() const;
};

#endif
