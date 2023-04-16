#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::AddContact(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	int i;
	
	i = this->index;
	std::cout << "Please enter your first name" << std::endl;
	std::getline(std::cin, firstname);
	std::cout << "Please enter your last name" << std::endl;
	std::getline(std::cin, lastname);
	std::cout << "Please enter your nickname" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Please enter your phone number" << std::endl;
	std::getline(std::cin, phonenumber);
	std::cout << "Please enter your darkest secret" << std::endl;
	std::getline(std::cin, darkestsecret);
	if (i > 7)
		i = this->index % 8;
	if (!firstname.empty() && !lastname.empty() && !nickname.empty() && !phonenumber.empty() && !darkestsecret.empty())
	{
		this->contacts[i].setFirstName(firstname);
		this->contacts[i].setLastName(lastname);
		this->contacts[i].setNickname(nickname);
		this->contacts[i].setPhoneNumber(phonenumber);
		this->contacts[i].setDarkestSecret(darkestsecret);
		this->index++;
		std::cout << "Contact Added" << std::endl;
	}
	else
	{
		std::cout << "No Empty Fields" << std::endl;
		return ;
	}
}

void	PhoneBook::SearchContact()
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		if (this->contacts[i].getFirstName().length() > 10)
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
		if (this->contacts[i].getLastName().length() > 10)
			std::cout << this->contacts[i].getLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
		if (this->contacts[i].getNickName().length() > 10)
			std::cout << this->contacts[i].getNickName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].getNickName() << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "Please enter an index" << std::endl;
	std::cin >> j;
	if (j < 0 || j > 7 || !std::cin)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << "First name: " << this->contacts[j].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[j].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[j].getNickName() << std::endl;
	std::cout << "Phone number: " << this->contacts[j].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[j].getDarkestSecret() << std::endl;
}
