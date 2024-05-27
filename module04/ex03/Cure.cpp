/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:03:06 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 12:42:12 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	//std::cout << "* " << AMateria::getType() << " materia was created *" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria("Cure"){
	*this = other;
	//std::cout << "* " << AMateria::getType() << " materia was copied *" << std::endl;
}

Cure &Cure::operator=(Cure const &other){
	if (this != &other)
		this->_type = other._type;
	return *this; //TODO:
}

Cure::~Cure(){
	//std::cout << "* " << AMateria::getType() << " materia was destroyed *" << std::endl;
}

AMateria* Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}