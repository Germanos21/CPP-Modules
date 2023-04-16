#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain	&operator=(const Brain &src);
	std::string	getIdea(int i) const;
	std::string setIdea(int i, std::string idea);
	~Brain();
};

#endif