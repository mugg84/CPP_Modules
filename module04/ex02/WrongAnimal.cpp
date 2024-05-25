/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 08:58:48 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/25 13:01:03 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("wrong animal"){
	std::cout << "A wrong animal is born" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "A wrong animal, actually a " << _type << " is born" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	*this = other;
	std::cout << "The wrong animal is copied" << std::endl;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	if (this != &other)
		_type = other.getType();
	std::cout << "The wrong animal is cloned" << std::endl;
	return *this;
};

WrongAnimal::~WrongAnimal(){
	std::cout << "The wrong animal is dead" << std::endl;
};

void	WrongAnimal::makeSound() const{
	std::cout << "The wrong animal is making a weird sound" << std::endl;
}

std::string	WrongAnimal::getType() const{
	return _type;
}