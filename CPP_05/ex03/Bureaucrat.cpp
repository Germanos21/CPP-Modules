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
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
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
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade = grade;
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high exception");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low exception");
}

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

const std::string   Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::increaseGrade()
{
	this->_grade--;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decreaseGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

int	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	return (this->_grade = grade);
}

void Bureaucrat::signAForm(AForm &AForm)
{
	AForm.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & Aform)
{
	Aform.execute(*this);
}