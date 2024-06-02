/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:48:56 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/02 09:59:41 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << std::endl << std::endl << "*************************" << std::endl << std::endl;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << std::endl << "*************************" << std::endl << std::endl;

	me->unequip(2);
	me->equip(tmp);

	std::cout << std::endl << "*************************" << std::endl << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "*************************" << std::endl << std::endl;

	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl << "*************************" << std::endl << std::endl;

	me->use(3, *bob);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	bob->use(0, *me);
	
	std::cout << std::endl << "*************************" << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;
	
	return 0;
}