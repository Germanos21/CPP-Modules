#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		index;
public:
	void	AddContact();
	void	SearchContact();
	PhoneBook();
	~PhoneBook();
};
