#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45) {std::cout << "Default Robotomy Request Form constructor called" << std::endl;}

RobotomyRequestForm::~RobotomyRequestForm() {std::cout << "Default Robotomy Request Form destructor called" << std::endl;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {std::cout << "Default Robotomy Request Form copy constructor called" << std::endl;}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "robotomy parameterized construction called " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "Robotomy Request Form operator overload called" << std::endl;
	if (this == &src)
		return(*this);
	this->_minexec = src._minexec;
	this->_minsign = src._minsign;
	this->_signed = src._signed;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	timeval tim;

	if (this->getSigned() == false)
		throw (FormNotSignedException());
	else if (executor.getGrade() > this->getMinExec())
		throw (GradeTooLowException());

	std::cout << "drilling noises" << std::endl;
	if (gettimeofday(&tim, NULL) % 2 == 0)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}
