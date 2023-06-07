#include "Form.hpp"

Form::Form() : _name("Form"), _minGradeSign(150), _minGradeExec(150)
{
	_isSigned = false;
	std::cout << "Form Default Constructor Called" << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	if (this->_isSigned != rhs._isSigned)
	{
		this->_isSigned = rhs.getSigned();
	}
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	return(*this);
}

Form::Form(const Form &copy) : _name(copy._name), _minGradeSign(copy._minGradeSign), _minGradeExec(copy._minGradeExec)
{
	_isSigned = copy.getSigned();
	std::cout << "Form Copy Constructor Called" << std::endl;
}

Form::Form(const std::string name, const int minsign, const int minexec) : _name(name), _minGradeSign(minsign), _minGradeExec(minexec)
{
	if (minsign < 1 || minexec < 1)
		throw(GradeTooHighException());
	else if (minsign > 150 || minexec > 150)
		throw(GradeTooLowException());
	this->_isSigned = 0;
	std::cout << "parameterized constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Default Destructor Called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("Error:\n Grade too high to sign");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Error:\n Grade too low to sign");
}

std::string	Form::getName() const
{
	return(this->_name);
}

bool	Form::getSigned() const
{
	return(this->_isSigned);
}

int	Form::getMinGradeSign() const
{
	return(this->_minGradeSign);
}

int	Form::getMinGradeExec() const
{
	return(this->_minGradeExec);
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << "Form Name : " << form.getName() << std::endl;
	if (form.getSigned() == 0)
		out << "Form not signed" << std::endl;
	else
		out << "Form signed" << std::endl;
	out << "Minimum grade to sign : " << form.getMinGradeSign() << std::endl;
	out << "Minimum grade to execute : " << form.getMinGradeExec() << std::endl;
	return (out);
}

void	Form::beSigned(Bureaucrat &guy)
{
	if (guy.getGrade() > this->getMinGradeSign())
		guy.signForm(*this);
	else
	{
		this->_isSigned = 1;
		guy.signForm(*this);
	}
}
