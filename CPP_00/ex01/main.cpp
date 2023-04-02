#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::string choice;
	PhoneBook phonebook;
	
	std::cout << "Welcome to a Phonebook, Choose \"EXIT\" or \"ADD\" or \"SEARCH\"" << std::endl;
	while (1)
	{
		std::getline(std::cin, choice);
		if (choice == "EXIT" || std::cin.eof())
			break ;
		if (choice == "ADD")
			phonebook.AddContact();
		if (choice == "SEARCH")
			phonebook.SearchContact();
		else
			std::cout << "Wrong command, try again" << std::endl;
		std::cin.clear();
	}
	return (0);
}