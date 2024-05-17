/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:20 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/17 10:08:08 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;
	if (argc != 2)
		return (std::cout << ERROR_MESS  << std::endl << std::endl, 1);
	else
		harl.complain(argv[1]);
	return (0);
}