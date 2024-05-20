/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:39:31 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/20 08:09:50 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void) {
	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	std::cout << "Triangle one, expected inside" << std::endl << std::endl;

	if (bsp(Point(0, 0), Point(5, 0), Point(0, 5), Point(2, 2)))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;

	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	std::cout << "Triangle two, expected outside" << std::endl << std::endl;

	if (bsp(Point(0, 0), Point(5, 0), Point(0, 5), Point(0, 5)))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl << std::endl;

	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	std::cout << "Triangle three, expected outside" << std::endl << std::endl;

	if (bsp(Point(0, 0), Point(5, 0), Point(0, 5), Point(10, 5)))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl << std::endl;

	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	return 0;
}