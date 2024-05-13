/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:22:12 by vboxuser1         #+#    #+#             */
/*   Updated: 2024/05/13 11:36:56 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string input = "";
	
	phonebook.printMsg(WELCOME_MSG);
	std::cout << ">" << std::endl; 
	std::cin >> input;
	while (input.compare("EXIT"))
	{	
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
		phonebook.printMsg(LOOP_MSG);
		std::cout << "> " << std::endl;
		std::cin >> input;
	}
	phonebook.printMsg(EXIT_MSG);
	return (0);
}