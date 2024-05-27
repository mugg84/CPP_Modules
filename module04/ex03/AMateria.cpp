/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:19:56 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 12:42:01 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type(""){
	//std::cout << "* Typeless AMateria was created. *" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type){
	//std::cout << "* " << _type << " AMateria was created. *" << std::endl;
}

AMateria::AMateria(const AMateria &other){
	*this = other;
}

AMateria::~AMateria(){
	// if (!_type.empty())
	// 	std::cout << "* " << _type <<" AMateria was destroyed. *" << std::endl;
	// else
	// 	std::cout << "* Typeless AMateria was destroyed. *" << std::endl;
}

std::string const & AMateria::getType() const{
	return _type;
}

AMateria* AMateria::clone() const{
	return (AMateria *)this;
}

void AMateria::use(ICharacter& target){
	std::cout << "* " << this->_type << " AMateria used on " << target.getName() << std::endl;
}

