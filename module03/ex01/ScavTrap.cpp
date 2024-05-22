/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:52:03 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/22 09:28:03 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name ): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " was created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " was destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode." << std::endl;
}
