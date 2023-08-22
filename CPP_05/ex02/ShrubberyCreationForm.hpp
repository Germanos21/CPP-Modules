#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <string>

class AForm;

class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_location;
	int					_minsign;
	int					_minexec;
	int					_signed;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrub);
	ShrubberyCreationForm(const std::string location);
	
	virtual void execute(Bureaucrat const & executor) const;
};


#endif
