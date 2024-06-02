/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:14:41 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/01 10:33:17 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap first("First");
	first.attack("Second");
	first.takeDamage(4);
	first.beRepaired(3);
	first.takeDamage(9);
	return 0;
}
