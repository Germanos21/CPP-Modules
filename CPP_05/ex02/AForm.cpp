#include "AForm.hpp"

AForm::AForm() : _name("default"), _issigned(0), _mingrade(150), _minexec(150) {std::cout << "AForm Default Constructor Called" << std::endl;}

AForm::~AForm() {std::cout << "AForm Default Destructor Called" << std::endl;}

const char  *AForm::GradeTooHighException::what() const throw() {return("Grade too high exception");}

AForm::AForm(const AForm &src) : _name(src._name), _issigned(false), _mingrade(src._mingrade), _minexec(src._minexec) {std::cout << "Copy constructor called" << std::endl;}

AForm::AForm(const std::string name, int minsign, int minexec) : _name(name), _issigned(false), _mingrade(minsign), _minexec(minexec)
{
	if (minsign > 150 || minexec > 150)
		throw (AForm::GradeTooLowException());
	else if (minsign < 1 || minexec < 1)
		throw (AForm::GradeTooHighException());
	std::cout << "AForm parameterized constructor Called" << std::endl;
}

const char  *AForm::GradeTooLowException::what() const throw() {return("Grade too low exception");}

const char  *AForm::FormNotSignedException::what() const throw() {return("Form not signed exception");}

std::ostream &operator<<(std::ostream &output, const AForm &f)
{
	output << "Form Name :  " << f.getName() << std::endl;
	output << "Form signed status : " << f.getSigned() << std::endl;
	output << "Form minimum execution grade : " << f.getMinExec() << std::endl;
	output << "Form minimum sign grade : " << f.getMinGrade() << std::endl;
	return (output);
}

const std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_issigned);
}

int	AForm::getMinGrade() const
{
	return (_mingrade);
}

int	AForm::getMinExec() const
{
	return (_minexec);
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
		_issigned = true;
	}
	else
	{
		std::cout << "Bureaucrat " << guy.getName() << " has successfully signed " \
		<< getName() << std::endl;
		_issigned = true;
	}
}
