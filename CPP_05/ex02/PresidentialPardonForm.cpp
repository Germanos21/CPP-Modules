#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form default destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this == &src)
		return (*this);
	this->_minexec = src._minexec;
	this->_minsign = src._minsign;
	this->_signed = src._signed;
	return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target)
{
	std::cout << "Presidential Pardon Form copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form Parameterized constructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw (FormNotSignedException());
	else if (executor.getGrade() > this->getMinExec())
		throw (GradeTooLowException());
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
}