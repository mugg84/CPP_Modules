/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:41:45 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 12:40:31 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	//std::cout << "* " << AMateria::getType() << " materia was created *" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria("ice"){
	*this = other;
	//std::cout << "* " << AMateria::getType() << " materia was copied *" << std::endl;
}

Ice &Ice::operator=(Ice const &other){
	if (this != &other)
		this->_type = other._type;
	return *this; //TODO:
}

Ice::~Ice(){
	//std::cout << "* " << AMateria::getType() << " materia was destroyed *" << std::endl;
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
