/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:16:36 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/16 10:54:07 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
		Sed::replace(argv[1], argv[2], argv[3]);
	else
		return(Sed::printError("Error: wrong number of args"));
	return (0);
}