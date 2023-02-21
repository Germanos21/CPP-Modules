/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:34:39 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/21 08:18:53 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string.h>
#include <iostream>

class Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	darkestsecret;
	std::string phonenumber;
	
public:
	//Constructor and Destructor
	Contact();
	~Contact();
	
	//Getters
	std::string	Contact::GetFirstName();
	std::string	Contact::GetLastName();
	std::string	Contact::GetNickname();
	std::string	Contact::GetPhoneNumber();
	std::string	Contact::Get_Darkest_Secret();
	//Setters
	void	Contact::Set_Darkest_Secret(std::string secret);
	void	Contact::SetPhoneNumber(std::string number);
	void	Contact::SetLastName(std::string Last_name);
	void	Contact::SetFirstName(std::string name);
	void	Contact::SetNickname(std::string Nick_name);

};

#endif