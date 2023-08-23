#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_issigned;
	int					_mingrade;
	int					_minexec;

public:
	AForm();
	~AForm();
	AForm(const AForm &src);
	AForm &operator=(const AForm &src);
	AForm(const std::string name, int minsign, int minexec);
	
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

std::ostream &operator<<(std::ostream &output, const AForm &f);

#endif
