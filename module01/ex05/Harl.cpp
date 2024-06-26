/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:15 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/17 09:43:45 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	functionPointers[0] = &Harl::debug;
	functionPointers[1] = &Harl::info;
	functionPointers[2] = &Harl::warning;
	functionPointers[3] = &Harl::error;
}

Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info()
{
	std::cout << INFO << std::endl;
}

void	Harl::warning()
{
	std::cout << WARNING << std::endl;
}

void	Harl::error()
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && level.compare(levels[i]))
		i++;
	if (i < 4)
		(this->*functionPointers[i])();
	else
		std::cout << WR_INPUT << std::endl;
}