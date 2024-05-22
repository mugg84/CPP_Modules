/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:15:53 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/22 09:35:00 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name ): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " was created." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " was destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void){
	if (this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " high fives the enemy!" << std::endl;
}