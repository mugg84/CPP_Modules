/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 09:00:26 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/25 14:03:56 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog"){
	_type = Animal::getType();
	_brain = new Brain();
	std::cout << "A dog is born" << std::endl;
}

Dog::Dog(const Dog &other) : Animal::Animal(other){
	*this = other;
	std::cout << "The dog is copied" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
	if (this != &other)
	{
		_type = other.getType();
		_brain = new Brain();
	}
	std::cout << "The dog is cloned" << std::endl;
	return *this;
}

Dog::~Dog(){
	delete _brain;
	std::cout << "The dog is dead" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "The dog is barking" << std::endl;
}