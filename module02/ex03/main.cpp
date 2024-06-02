/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:39:31 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 13:17:50 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void) {
	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	std::cout << "Triangle one, expected inside" << std::endl << std::endl;

	if (bsp(Point(0.5f, 0.5f), Point(0.5f, 1.5f), Point(1.5f, 0.5f), Point(0.9645f, 1)))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;

	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	std::cout << "Triangle two, expected inside" << std::endl << std::endl;

	if (bsp(Point(0.5f, 0.5f), Point(0.5f, 1.5f), Point(1.5f, 0.5f), Point(1, 0.9645f)))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl << std::endl;

	std::cout << std::endl << "**************************************************"  << std::endl << std::endl;
	std::cout << "Triangle three, expected outside" << std::endl << std::endl;

	if (bsp(Point(0.5f, 0.5f), Point(0.5f, 1.5f), Point(1.5f, 0.5f), Point(1, 1)))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	std::cout << std::endl << "**************************************************" << std::endl;
	
	return 0;
}