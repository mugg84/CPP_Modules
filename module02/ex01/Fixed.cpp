/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:40:39 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/19 11:48:21 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const int n) : _fixedPoint(n << _fractBits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPoint(roundf(n * (1 << _fractBits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _fixedPoint(other._fixedPoint) {
	std::cout << "Copy constructor called" << std::endl;
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
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw){
	this->_fixedPoint = raw;
}

float	Fixed::toFloat() const{
	return static_cast<float>(this->_fixedPoint) / (1 << _fractBits);
}


int	Fixed::toInt() const{
	return this->_fixedPoint >> _fractBits;
}

std::ostream & operator<<(std::ostream& o, const Fixed& i) {
	o << i.toFloat();
	return o;
}