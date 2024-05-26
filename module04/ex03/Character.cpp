/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:22:19 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/26 15:18:04 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	std::cout << "* A caracter named " << _name << " was created. *" << std::endl;
}

Character::Character(const Character &other){

}

Character::~Character(){
	int i = 0;

	for (i; i < 4; i++)
		delete _slots[i];
	i = 0;
	while (_unequipped[i])
		delete _unequipped[i++];
	std::cout << "* The character named " << _name << " died. *" << std::endl;
}

Character &Character::operator=(const Character &other){

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
			std::cout << "* Materia " << m->getType() << " was equipped on slot " << i << ". *" << std::endl;
			return ;
		}
	}
	std::cout << "* All slots full. *" << std::endl;
}

void Character::unequip(int idx){
	if (_slots[idx])
	{
		_unequipped.push_back(_slots[idx]);
		_slots[idx] = NULL;
		std::cout << "* Materia " << _slots[idx]->getType() << " was unequipped. *" << std::endl;
	}
	else
		std::cout << "* No materia in slot " << idx << ". *" << std::endl;
}

void Character::use(int idx, ICharacter& target){
	if (_slots[idx])
		_slots[idx]->use(target);
}
