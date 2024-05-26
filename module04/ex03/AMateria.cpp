/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:19:56 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/26 12:43:39 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type(""){
	std::cout << "* Typeless AMateria was created. *" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type){
	std::cout << "* " << _type << " AMateria was created. *" << std::endl;
}

AMateria::AMateria(const AMateria &other){
	*this = other;
}

AMateria::~AMateria(){
	if (!_type.empty())
		std::cout << _type <<"*  AMateria was destroyed. *" << std::endl;
	else
		std::cout << "* Typeless AMateria was destroyed. *" << std::endl;
}

std::string const & AMateria::getType() const{
	return _type;
}

AMateria* AMateria::clone() const{} //TODO:

void AMateria::use(ICharacter& target){
	 std::cout << "* " << this->_type << " AMateria used on " << target.getName() << std::endl;
	// if (_type.compare("cure"))
	// 	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	// else if (_type.compare("ice"))
	// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	// else
	// 	std::cout << "* doesn't know how to use this materia. *" << std::endl;
}

