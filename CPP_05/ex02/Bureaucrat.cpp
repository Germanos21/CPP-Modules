#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	setGrade(grade);
	std::cout << "Bureaucrat Parametric constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	setGrade(rhs._grade);
	return(*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = src;
}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

void	Bureaucrat::IncrementGrade()
{
	if  (getGrade() - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (getGrade() - 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		setGrade(getGrade() + 1);
}

void	Bureaucrat::DecrementGrade()
{
	if  (getGrade() + 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (getGrade() + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		setGrade(getGrade() + 1);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error:\n Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error:\n Grade too Low");
}

void	Bureaucrat::signAForm(AForm &AForm)
{
	if (AForm.getSigned() == 1)
		std::cout << getName() << " signed " << AForm.getName() << std::endl;
	else
		std::cout << getName() << " couldn't sign " << AForm.getName() << " because his grade was too low" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return(out);
}
