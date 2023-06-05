#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_minGradeSign;
	const int			_minGradeExec;
public:
	Form();
	~Form();
	class	GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	std::string	getName() const;
	bool		getSigned() const;
	int	getMinGradeSign() const;
	int	getMinGradeExec() const;

};

std::ostream& operator<<(std::ostream& out, const Form& form);
#endif
