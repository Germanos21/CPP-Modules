#include "AForm.hpp"

AForm::AForm() : _name("default")
{
	std::cout << "AForm Default Constructor Called" << std::endl;
	this->_minexec = 150;
	this->_mingrade = 150;
	this->_issigned = false;
}

AForm::~AForm()
{
	std::cout << "AForm Default Destructor Called" << std::endl;
}

AForm::AForm(const AForm &src) : _name(src._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

const char  *AForm::GradeTooHighException::what() const throw()
{
	return("Grade too high exception");
}

AForm::AForm(const std::string name, int minsign, int minexec) : _name(name)
{
	if (minsign > 150 || minexec > 150)
		throw (AForm::GradeTooLowException());
	else if (minsign < 1 || minexec < 1)
		throw (AForm::GradeTooHighException());
	std::cout << "AForm parameterized constructor Called" << std::endl;
	this->_minexec = minexec;
	this->_mingrade = minsign;
	this->_issigned = false;
}

const char  *AForm::GradeTooLowException::what() const throw()
{
	return("Grade too low exception");
}

std::ostream &operator<<(std::ostream &output, const AForm &f)
{
	output << "AForm Name :  " << f.getName() << std::endl;
	output << "AForm signed status : " << f.getSigned() << std::endl;
	output << "AForm minimum execution grade : " << f.getMinExec() << std::endl;
	output << "AForm minimum sign grade : " << f.getMinGrade() << std::endl;
	return (output);
}

const std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_issigned);
}

int	AForm::getMinGrade() const
{
	return (this->_mingrade);
}

int	AForm::getMinExec() const
{
	return (this->_minexec);
}

AForm &AForm::operator=(const AForm &src)
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

void	AForm::beSigned(Bureaucrat &guy)
{
	if (guy.getGrade() > getMinGrade())
		throw (GradeTooLowException());
	else if (getSigned() == true)
	{
		std::cout << "Bureacrat " << guy.getName() << " is unable to sign AForm " \
		<< getName() << " because the AForm is already signed " << std::endl;
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
