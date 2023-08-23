#include "Intern.hpp"

Intern::Intern() {std::cout << "Intern default constructor called" << std::endl;}

Intern::~Intern() {std::cout << "Intern default destructor called" << std::endl;}

Intern &Intern::operator=(const Intern &src)
{
	std::cout << "Intern default operator overload called" << std::endl;
	if (this != &src)
		*this = src;
	return (*this);
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern default copy constructor called" << std::endl;
	*this = src;
}

static AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(const std::string form_to_create, const std::string target_for_form)
{
	AForm *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (form_to_create == forms[i])
		{
			std::cout << "Intern creates " << form_to_create << " now" << std::endl;
			return (all_forms[i](target_for_form));
		}
	}

	std::cout << "\033[33mIntern can not create a form called " << form_to_create << "\033[0m" << std::endl;
	return (NULL);
}