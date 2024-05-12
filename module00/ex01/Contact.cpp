/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser1 <vboxuser1@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:23:44 by vboxuser1         #+#    #+#             */
/*   Updated: 2024/05/12 16:42:29 by vboxuser1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getInput(std::string str)
{
	std::string	input = "";
	bool		valid_input = false;
	
	while (!valid_input)
	{
		std::cout << str << std::endl;
		std::getline(std::cin, input);
		if (!input.empty())
			valid_input = true;
		else
			std::cout << "Invalid input" << std::endl;
	}
	return (input);
}

void	Contact::init()
{
	std::cin.ignore();
	this->_firstName = this->getInput("Please add your first name");
	this->_lastName = this->getInput("Please add your last name");
	this->_nickname = this->getInput("Please add your nickname");
	this->_phoneNumber = this->getInput("Please add your phone number");
	this->_darkestSecret = this->getInput("Please add your darkest secret");
	std::cout  << "Contact added" << std::endl;
}

void	Contact::setIndex(int i)
{
	this->_index = i;
}