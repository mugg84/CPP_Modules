/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:14:41 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/02 09:52:55 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	//const AAnimal* z = new AAnimal(); 
	
	std::cout << std::endl << "*************************" << std::endl << std::endl;

	i->makeSound();
	j->makeSound();

	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	delete j;
	delete i;

	return 0;
}