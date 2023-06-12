#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _minGradeSign(150), _minGradeExec(150)
{
	_isSigned = false;
	std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this->_isSigned != rhs._isSigned)
	{
		this->_isSigned = rhs.getSigned();
	}
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	return(*this);
}

AForm::AForm(const AForm &copy) : _name(copy._name), _minGradeSign(copy._minGradeSign), _minGradeExec(copy._minGradeExec)
{
	_isSigned = copy.getSigned();
	std::cout << "AForm Copy Constructor Called" << std::endl;
}

AForm::AForm(const std::string name, const int minsign, const int minexec) : _name(name), _minGradeSign(minsign), _minGradeExec(minexec)
{
	if (minsign < 1 || minexec < 1)
		throw(GradeTooHighException());
	else if (minsign > 150 || minexec > 150)
		throw(GradeTooLowException());
	this->_isSigned = 0;
	std::cout << "parameterized constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm Default Destructor Called" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return("Error:\n Grade too high to sign");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("Error:\n Grade too low to sign");
}

std::string	AForm::getName() const
{
	return(this->_name);
}

bool	AForm::getSigned() const
{
	return(this->_isSigned);
}

int	AForm::getMinGradeSign() const
{
	return(this->_minGradeSign);
}

int	AForm::getMinGradeExec() const
{
	return(this->_minGradeExec);
}

std::ostream& operator<<(std::ostream& out, const AForm& AForm)
{
	out << "AForm Name : " << AForm.getName() << std::endl;
	if (AForm.getSigned() == 0)
		out << "AForm not signed" << std::endl;
	else
		out << "AForm signed" << std::endl;
	out << "Minimum grade to sign : " << AForm.getMinGradeSign() << std::endl;
	out << "Minimum grade to execute : " << AForm.getMinGradeExec() << std::endl;
	return (out);
}

void	AForm::beSigned(Bureaucrat &guy)
{
	if (guy.getGrade() > this->getMinGradeSign())
		guy.signAForm(*this);
	else
	{
		this->_isSigned = 1;
		guy.signAForm(*this);
	}
}

const char *AForm::NotSignedException::what() const throw()
{
	return("Error:\n Cannot Execute: Form not signed");
}
