/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:59:29 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/20 04:46:42 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (islower(argv[j][i]) != 0)
				argv[j][i] = toupper(argv[j][i]);
			std::cout << argv[j][i];
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}