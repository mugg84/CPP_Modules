/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:59:21 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/15 11:48:14 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		hordeSize;
	Zombie	*horde;
	
	hordeSize = 4;
	std::cout << "First horde, size " << hordeSize << std::endl;
	horde = zombieHorde(hordeSize, "First horde");
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << std::endl;
	
	hordeSize = 0;
	std::cout << "Second horde, size " << hordeSize << std::endl;
	horde = zombieHorde(hordeSize, "First horde");
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	hordeSize = -10;
	std::cout << "Third horde, size " << hordeSize << std::endl;
	horde = zombieHorde(hordeSize, "First horde");
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << std::endl;
	
	hordeSize = 10;
	std::cout << "Fourth horde, size " << hordeSize << std::endl;
	horde = zombieHorde(hordeSize, "First horde");
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();
	delete[] horde;

	return (0);
}