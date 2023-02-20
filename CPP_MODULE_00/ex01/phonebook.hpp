/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:43:29 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/20 13:12:26 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_h
# define PHONEBOOK_H
#include "contacts.hpp"
#include <iomanip>
#include <string>
#include <cstring>
#include <iostream>

class Phonebook
{
private:

public:
	contacts	contact[8];
	int	index_;
	//Constructor
	Phonebook();
	//Deconstructor
	~Phonebook();
};

#endif