#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_minGradeSign;
	const int			_minGradeExec;
public:
	AForm();
	AForm &operator=(const AForm &rhs);
	AForm(const std::string name, const int minsign, const int minexec);
	AForm(const AForm &copy);
	~AForm();
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
	int			getMinGradeSign() const;
	int			getMinGradeExec() const;
	void		beSigned(Bureaucrat &guy);
};

std::ostream& operator<<(std::ostream& out, const AForm& AForm);

#endif
