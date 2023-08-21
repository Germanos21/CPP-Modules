#include "Form.hpp"

Form::Form() : _name("default")
{
	std::cout << "Form Default Constructor Called" << std::endl;
	this->_minexec = 150;
	this->_mingrade = 150;
	this->_issigned = false;
}

Form::~Form()
{
	std::cout << "Form Default Destructor Called" << std::endl;
}

Form::Form(const Form &src) : _name(src._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

const char  *Form::GradeTooHighException::what() const throw()
{
	return("Grade too high exception");
}

Form::Form(const std::string name, int minsign, int minexec) : _name(name)
{
	if (minsign > 150 || minexec > 150)
		throw (Form::GradeTooLowException());
	else if (minsign < 1 || minexec < 1)
		throw (Form::GradeTooHighException());
	std::cout << "Form parameterized constructor Called" << std::endl;
	this->_minexec = minexec;
	this->_mingrade = minsign;
	this->_issigned = false;
}

const char  *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low exception");
}

std::ostream &operator<<(std::ostream &output, const Form &f)
{
	output << "Form Name :  " << f.getName() << std::endl;
	output << "Form signed status : " << f.getSigned() << std::endl;
	output << "Form minimum execution grade : " << f.getMinExec() << std::endl;
	output << "Form minimum sign grade : " << f.getMinGrade() << std::endl;
	return (output);
}

const std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_issigned);
}

int	Form::getMinGrade() const
{
	return (this->_mingrade);
}

int	Form::getMinExec() const
{
	return (this->_minexec);
}

Form &Form::operator=(const Form &src)
{
	if (this == &src)
		return (*this);
	else
	{
		this->_mingrade = src._mingrade;
		this->_minexec = src._minexec;
		this->_issigned = src._issigned;
	}
	return (*this);
}

void	Form::beSigned(Bureaucrat &guy)
{
	if (guy.getGrade() > getMinGrade())
		throw (GradeTooLowException());
	else if (getSigned() == true)
	{
		std::cout << "Bureacrat " << guy.getName() << " is unable to sign form " \
		<< getName() << " because the form is already signed " << std::endl;
		this->_issigned = true;
	}
	else
	{
		std::cout << "Bureaucrat " << guy.getName() << " has successfully signed " \
		<< getName() << std::endl;
		this->_issigned = true;
	}
	this->_issigned = false;
}
