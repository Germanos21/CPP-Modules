#include "Form.hpp"

Form::Form() : _name("Form"), _minGradeSign(150), _minGradeExec(150)
{
	_isSigned = 0;
	std::cout << "Form Default Constructor Called" << std::endl;
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
