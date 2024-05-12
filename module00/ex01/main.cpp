/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser1 <vboxuser1@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:22:12 by vboxuser1         #+#    #+#             */
/*   Updated: 2024/05/12 16:39:58 by vboxuser1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string input = "";
	
	phonebook.initMsg();
	while (input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
		std::cout << ">" << std::endl;
		std::cin >> input;
	}
	return (0);
}