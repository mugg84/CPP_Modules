/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:14:41 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/02 09:54:53 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	const Animal* unknown = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << unknown->getType() << " " << std::endl;

	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	cat->makeSound();
	dog->makeSound();
	unknown->makeSound();

	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	delete unknown;
	delete dog;
	delete cat;

	std::cout << std::endl << "*************************" << std::endl << std::endl;

	const WrongAnimal *wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();
	delete wrong;

	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;

	return 0;
}