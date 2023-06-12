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
	class	NotSignedException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	virtual std::string	getName() const;
	virtual bool		getSigned() const;
	virtual int			getMinGradeSign() const;
	virtual int			getMinGradeExec() const;
	virtual void		beSigned(Bureaucrat &guy);
	virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& AForm);

#endif
