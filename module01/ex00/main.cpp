/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:59:21 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/15 11:04:36 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	zombie1("zombie1");
	zombie1.announce();
	Zombie	*zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("zombie3");
	delete(zombie2);
	return (0);
}