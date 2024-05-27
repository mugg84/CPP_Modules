/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:11:23 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 12:41:32 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	//std::cout << "* MateriaSource was created *" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other){
	*this = other;
	//std::cout << "* MateriaSource was copied *" << std::endl;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		delete _slots[i];
	//std::cout << "* MateriaSource was destroyed *" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other){
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			_slots[i] = other._slots[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m){
	for (int i = 0; i < 4; i++)
	{
		if (!_slots[i])
		{
			_slots[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i] && !_slots[i]->getType().compare(type))
			return _slots[i]->clone();
	}
	return 0;
}
