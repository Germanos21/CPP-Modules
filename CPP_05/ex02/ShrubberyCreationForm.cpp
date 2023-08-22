#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _location("default") {std::cout << "Shrubbery Creation AForm default constructor called" << std::endl;}

ShrubberyCreationForm::~ShrubberyCreationForm() {std::cout << "Shrubbery Creation AForm default destructor called" << std::endl;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {std::cout << "Shrubbery Creation Form Copy Constructor Called" << std::endl;}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrub)
{
	if (this == &shrub)
		return (*this);
	this->_minexec = shrub._minexec;
	this->_minsign = shrub._minsign;
	this->_signed = shrub._signed;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string location) : AForm("Presidential Pardon Form", 25, 5), _location(location)
{
	std::cout << "Shrubbery Creation Form Parameterized Constructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getMinExec())
		throw (GradeTooLowException());
	else if (this->getSigned() == false)
	{
		throw (std::runtime_error("Form not Signed Exception"));
	}
	std::string filename = this->_location + "_shrubbery";
	std::ofstream file(filename.c_str());
	file << "   0000000" << std::endl;
	file << "  000000000" << std::endl;
	file << " 00000000000" << std::endl;
	file << "0000000000000" << std::endl;
	file << "   0000000" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "-------------" << std::endl;
	file.close();
}