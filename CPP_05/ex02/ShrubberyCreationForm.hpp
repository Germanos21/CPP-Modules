#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "fstream"

class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_minGradeSign;
	const int			_minGradeExec;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm(const std::string name);
	void	execute(const Bureaucrat & executor) const;
};


#endif
