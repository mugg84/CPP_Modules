/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:15:53 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/01 10:44:09 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name ): ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "FragTrap " << _name << " was created." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " was destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void){
	if (_energyPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " high fives the enemy!" << std::endl;
}