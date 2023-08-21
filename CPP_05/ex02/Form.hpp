#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_issigned;
	int					_mingrade;
	int					_minexec;

public:
	Form();
	~Form();
	Form(const Form &src);
	Form &operator=(const Form &src);
	Form(const std::string name, int minsign, int minexec);
	
	bool 				getSigned() const;
	const std::string 	getName() const;
	int					getMinExec() const;
	int					getMinGrade() const;
	void				beSigned(Bureaucrat &guy);

	class	GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &output, const Form &f);

#endif
