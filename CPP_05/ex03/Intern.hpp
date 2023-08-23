#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
public:
	Intern();
	~Intern();
	Intern &operator=(const Intern &src);
	Intern(const Intern &src);
	AForm	*makeForm(const std::string form_to_create, const std::string target_for_form);
};

#endif