#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{

	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat Assignment opertaor called" << std::endl;
	if (this == &src)
		return (*this);
	else
		this->_grade = src.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &b)
{
	output << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (output);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName() + "_copy")
{
	std::cout << "Copy constructor called " << std::endl;
	*this = src; 
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too Low");
}

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

const std::string   Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	this->_grade--;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}
