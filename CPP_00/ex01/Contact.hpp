#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:

	void	setFirstName(std::string firstname);
	void	setLastName(std::string lastname);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(std::string phonenumber);
	void	setDarkestSecret(std::string darkestsecret);

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

	Contact();
	~Contact();
};
