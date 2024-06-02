/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:14:41 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/02 09:45:18 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* animals[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;
		if (i <= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl << std::endl << "*************************" << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;
		delete animals[i];
	}
	
	std::cout << std::endl << std::endl << "*************************" << std::endl;
	
	return 0;
}