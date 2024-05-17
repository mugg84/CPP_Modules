/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:15 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/17 10:12:27 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG << std::endl;
	std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && level.compare(levels[i]))
		i++;
	switch (i)
	{
		case	0:
			this->debug();
			break ;
		case	1:
			this->info();
			break ;
		case	2:
			this->warning();
			break ;
		case	3:
			this->error();
			break ;
		default:
			std::cout << WR_INPUT << std::endl;
	}
}