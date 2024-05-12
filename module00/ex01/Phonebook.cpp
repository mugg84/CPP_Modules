/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser1 <vboxuser1@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:07:34 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/12 16:39:51 by vboxuser1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::initMsg(void) const
{
	std::cout << "Phonebook ready: add, search, exit" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i;

	if (i > 7)
		i = 0;
	this->_contacts[i].init();
	i++;
}

void	PhoneBook::searchContact(void) const
{
	
}