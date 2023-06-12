#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_minGradeSign;
	const int			_minGradeExec;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
};
