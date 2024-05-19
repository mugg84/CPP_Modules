/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:40:39 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/18 13:24:57 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	//this->_fixedPoint = other._fixedPoint;
	*this = other; //TODO:check
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_fixedPoint = other._fixedPoint;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw){
	this->_fixedPoint = raw;
}
