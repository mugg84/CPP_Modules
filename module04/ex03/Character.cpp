/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:22:19 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 12:49:00 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	//std::cout << "* A character named " << _name << " was created *" << std::endl;
}

Character::Character(const Character &other){
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
		if (other._slots[i])
			_slots[i] = other._slots[i]->clone();
		else
			_slots[i] = NULL;
	}
	_unequipped = other._unequipped;
	//std::cout << "* A character named " << _name << " was copied *" << std::endl;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete _slots[i];
	for (size_t i = 0; i < _unequipped.size(); i++)
			delete _unequipped[i];
	//std::cout << "* The character named " << _name << " died *" << std::endl;
}

Character &Character::operator=(const Character &other){
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			delete _slots[i];
			if (other._slots[i])
				_slots[i] = other._slots[i]->clone();
			else
				_slots[i] = NULL;
		}
	}
	_unequipped = other._unequipped;
	return *this;
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if (!_slots[i])
		{
			_slots[i] = m;
			std::cout << "* Materia " << m->getType() << " was equipped on slot " << i << " *" << std::endl;
			return ;
		}
	}
	std::cout << "* All slots full *" << std::endl;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		std::cout << "* Please select a slot from 0 to 4 *" << std::endl;
	else if (_slots[idx])
	{
		_unequipped.push_back(_slots[idx]);
		std::cout << "* Materia " << _slots[idx]->getType() << " from slot " << idx << " was unequipped *" << std::endl;
		_slots[idx] = NULL;
	}
	else
		std::cout << "* No materia in slot " << idx << " *" << std::endl;
}

void Character::use(int idx, ICharacter& target){
	if (_slots[idx])
		_slots[idx]->use(target);
}
