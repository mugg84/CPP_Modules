/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 08:54:49 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/25 14:19:29 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unknown"){
	std::cout << "An animal is born" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "An animal is born" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "The animal is copied" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	if (this != &other)
		this->_type = other.getType();
	std::cout << "The animal is cloned" << std::endl;
	return *this;
}

Animal::~Animal(){
	std::cout << "The animal is dead" << std::endl;
}

void	Animal::makeSound() const{
	std::cout << "The animal is making a sound" << std::endl;
}

std::string	Animal::getType() const{
	return _type;
}
