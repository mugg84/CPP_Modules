/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:20 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/16 11:19:15 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	input;

	do
	{
		std::cout << "Choose between DEBUG, INFO, WARNING, ERROR and EXIT" << std::endl;
		std::cin >> input;
		harl.complain(input);

	} while (input.compare("EXIT"));
	
	return (0);
}