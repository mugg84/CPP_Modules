/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 06:15:21 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/01 10:37:34 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(20){
	std::cout << "ClapTrap " << _name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	*this = other;
	std::cout << "ClapTrap " << _name << " was copied." << std::endl;
};

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " was destroyed." << std::endl;

};

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints <= amount)
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount){
	 if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " recovers " << amount << " hit points!" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}
