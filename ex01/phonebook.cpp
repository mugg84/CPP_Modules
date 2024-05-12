/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 10:07:34 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/12 14:31:58 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void	PhoneBook::init_msg(void) const
{
	std::cout << "Phonebook ready: add, search, exit" << std::endl;
}

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	
	phonebook.init_msg();
	return (0);
}