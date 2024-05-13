/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:23:44 by vboxuser1         #+#    #+#             */
/*   Updated: 2024/05/13 12:13:51 by mmughedd         ###   ########.fr       */
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
		std::cout << std::endl;
		std::getline(std::cin, input);
		if (!input.empty())
			valid_input = true;
		else
			std::cout << "Invalid input" << std::endl;
	}
	return (input);
}

void	Contact::print_ast(int ast) const
{
	std::cout << std::endl;
	for (int i = 0; i < ast; ++i)
		std::cout << "*";
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->print_ast(45);
	this->_firstName = this->getInput("Please add your first name:");
	this->print_ast(20);
	this->_lastName = this->getInput("Please add your last name:");
	this->print_ast(20);
	this->_nickname = this->getInput("Please add your nickname:");
	this->print_ast(20);
	this->_phoneNumber = this->getInput("Please add your phone number:");
	this->print_ast(20);
	this->_darkestSecret = this->getInput("Please add your darkest secret:");
	this->print_ast(45);
	std::cout  << "Contact added" << std::endl;
	this->print_ast(45);
}

bool	Contact::isEmpty(void) const
{
	if (this->_firstName.empty())
		return (true);
	return (false);
}

void	Contact::setIndex(int i)
{
	this->_index = i;
}

void	Contact::_formatTen(std::string str) const
{
	int	len = str.length();
	for (int i = 0; i < 10; i++)
	{
		if (i < len)
		{
			if (i < 9)
				std::cout << str[i];
			else
				std::cout << '.';
		}
		else
			std::cout << ' ';
	}
}

void	Contact::printContacts(void) const
{
	std::cout << "|";
	std::cout << this->_index;
	std::cout << "         ";
	std::cout << "|";
	this->_formatTen(this->_firstName);
	std::cout << "|";
	this->_formatTen(this->_lastName);
	std::cout << "|";
	this->_formatTen(this->_nickname);
	std::cout << "|";
	std::cout << std::endl;
}

void		Contact::printSingleContact(void) const
{
	this->print_ast(45);
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First Name: "<< this->_firstName << std::endl;
	std::cout << "Last Name: "<< this->_lastName << std::endl;
	std::cout << "Nickname: "<< this->_nickname << std::endl;
	std::cout << "Phone Number: "<< this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: "<< this->_darkestSecret << std::endl;
	this->print_ast(45);
}
