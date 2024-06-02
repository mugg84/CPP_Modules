/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 08:54:49 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/02 09:53:18 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unknown"){
	std::cout << "An animal is born" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type){
	std::cout << "An animal is born" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "The animal is copied" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	if (this != &other)
		this->_type = other.getType();
	std::cout << "The animal is cloned" << std::endl;
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "The animal is dead" << std::endl << std::endl;
}

void	AAnimal::makeSound() const{
	std::cout << "The animal is making a sound" << std::endl;
}

std::string	AAnimal::getType() const{
	return _type;
}
