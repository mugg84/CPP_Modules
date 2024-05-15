/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:07:34 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/15 09:26:15 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::printMsg(int i) const
{
	if (i == 0)
	{
		std::cout << "Welcome to phonebook" << std::endl;
		std::cout << "Available commands:" << std::endl;
		std::cout << "ADD, SEARCH and EXIT" << std::endl;
	}
	else if (i == 1)
	{
		std::cout << "Available commands:" << std::endl;
		std::cout << "ADD, SEARCH and EXIT" << std::endl;
	}
	else if (i == 2)
		std::cout << "Exited phonebook" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	if (i > 7)
		i = 0;
	this->_contacts[i].init();
	this->_contacts[i].setIndex(i);
	i++;
}

void	PhoneBook::searchContact(void) const
{
	int	i = -1;
	int	input = -1;

	while (++i < 8 && !this->_contacts[i].isEmpty())
		this->_contacts[i].printContacts();
	if (i == 0)
	{
		std::cerr << "No contacts available" << std::endl;
		std::cerr << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << "Please enter contact index:" << std::endl;
		std::cin >> input;
		if (std::cin.good() && input >= 0 && input <= 7)
		{
			if (!this->_contacts[input].isEmpty())
				break ;
			else
				std::cout << "Empty contact." << std::endl;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cerr << "Invalid input. Input must be a digit between 0 and 7." << std::endl;
		}
	}
	this->_contacts[input].printSingleContact();
}