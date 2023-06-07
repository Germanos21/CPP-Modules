#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _name("default"), _minGradeSign(145), _minGradeExec(137)
{
	this->_isSigned = 0;
	std::cout << "Default Shrubbery Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default Shrubbery Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : _name(name), _minGradeSign(145), _minGradeExec(137)
{
	std::cout << "Parameterized Constructor Called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	if (this->_isSigned != rhs._isSigned)
	{
		this->_isSigned = rhs.getSigned();
	}
	return (*this);
}
