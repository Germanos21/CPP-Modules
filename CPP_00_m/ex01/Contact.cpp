#include "Contact.hpp"

//constructor
Contact::Contact() {};

//destructor
Contact::~Contact() {};

//setters
void	Contact::setFirstName(std::string firstname)
{
	FirstName = firstname;
}

void	Contact::setLastName(std::string lastname)
{
	LastName = lastname;
}

void	Contact::setNickname(std::string nickname)
{
	Nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phonenumber)
{
	PhoneNumber = phonenumber;
}
void	Contact::setDarkestSecret(std::string darkestsecret)
{
	DarkestSecret = darkestsecret;
}

//getters
std::string	Contact::getFirstName() const
{
	return (FirstName);
}

std::string	Contact::getLastName() const
{
	return (LastName);
}

std::string	Contact::getNickName() const
{
	return (Nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (PhoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (DarkestSecret);
}
