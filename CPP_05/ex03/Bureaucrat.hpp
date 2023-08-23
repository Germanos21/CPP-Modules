#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &src);

		int					getGrade() const;
		int					setGrade(int grade);
		const std::string	getName() const;
		void				decrementGrade();
		void				incrementGrade();
		void				increaseGrade();
		void				decreaseGrade();
		void				signAForm(AForm &AForm);
		void 				executeForm(AForm const & Aform);
	class	GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &b);

#endif
