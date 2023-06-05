#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	/*  Exceptions  */
	class	GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class	GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	/*  Orthodox Cannonical Class  */
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& rhs);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat(const std::string name, int grade);
	/*  Getters and Setters */
	std::string getName() const;
	int		getGrade() const;
	void	setGrade(int grade);
	/*  Increment and Decrement  */
	void	IncrementGrade();
	void	DecrementGrade();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);