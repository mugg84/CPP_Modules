/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:01:57 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/01 10:56:31 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name){
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " was created." << std::endl << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " was destroyed." << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap " << _name << " ClapTrap name is " << ClapTrap::_name << std::endl << std::endl;
}