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
	virtual	~AForm();
			AForm(const AForm &src);
			AForm &operator=(const AForm &src);
			AForm(const std::string name, int minsign, int minexec);
	
	virtual	bool 				getSigned() const;
	virtual	const std::string 	getName() const;
	virtual	int					getMinExec() const;
	virtual	int					getMinGrade() const;
	virtual	void				beSigned(Bureaucrat &guy);

	class	GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class	FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};

	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &output, const AForm &f);

#endif
