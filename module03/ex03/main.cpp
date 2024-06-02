/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:14:41 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/01 10:57:57 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap first("FIRST");
	DiamondTrap second(first);
	DiamondTrap third("THIRD");

	std::cout << std::endl << "************************"  << std::endl << std::endl;

	first.whoAmI();
	second.whoAmI();
	third.whoAmI();
	third = first;
	third.whoAmI();

	std::cout << std::endl << "************************"  << std::endl << std::endl;

	first.attack("someone");
	first.takeDamage(20);
	first.beRepaired(20);

	std::cout << std::endl << "************************"  << std::endl << std::endl;

	return 0;
}