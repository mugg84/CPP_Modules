/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 09:00:09 by mmughedd          #+#    #+#             */
/*   Updated: 2024/06/02 09:27:35 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal("Cat"), _type("Cat"){
	std::cout << "A cat is born" << std::endl;
}

Cat::Cat(const Cat &other) : Animal::Animal(other){
	*this = other;
	std::cout << "The cat is copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	if (this != &other)
		_type = other.getType();
	std::cout << "The cat is cloned" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "The cat is dead" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "The cat is meowing" << std::endl;
}