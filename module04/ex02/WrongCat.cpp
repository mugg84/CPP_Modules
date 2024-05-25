/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 08:59:24 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/25 13:01:10 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("wrong cat"){
	_type = WrongAnimal::getType();
	std::cout << "A wrong cat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal::WrongAnimal("Wrong cat"){
	*this = other;
	std::cout << "The wrong cat is cloned" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	if (this != &other)
		_type = other.getType();
	std::cout << "The wrong cat is cloned" << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "The wrong cat is dead" << std::endl;
}