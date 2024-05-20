/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:40:39 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/20 08:35:10 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixedPoint = 0;
}

Fixed::Fixed(const int n) : _fixedPoint(n << _fractBits){}

Fixed::Fixed(const float n) : _fixedPoint(roundf(n * (1 << _fractBits))){}

Fixed::Fixed(const Fixed& other) : _fixedPoint(other._fixedPoint) {}

Fixed& Fixed::operator=(const Fixed& other){
	if (this == &other)
		return *this;
	this->_fixedPoint = other._fixedPoint;
	return *this;
}

Fixed::~Fixed() {}

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

// comparison operators

bool	Fixed::operator>(const Fixed& other) const{
	return this->_fixedPoint > other.getRawBits();
}

bool	Fixed::operator<(const Fixed& other) const{
	return this->_fixedPoint < other.getRawBits();
}

bool	Fixed::operator>=(const Fixed& other) const{
	return this->_fixedPoint >= other.getRawBits();

}

bool	Fixed::operator<=(const Fixed& other) const{
	return this->_fixedPoint <= other.getRawBits();

}

bool	Fixed::operator==(const Fixed& other) const{
	return this->_fixedPoint == other.getRawBits();
}

bool	Fixed::operator!=(const Fixed& other) const{
	return this->_fixedPoint != other.getRawBits();
}

// arithmetic operators

Fixed	Fixed::operator+(const Fixed& other) const{
	return this->toFloat() + other.toFloat();
}

Fixed	Fixed::operator-(const Fixed& other) const{
	return this->toFloat() - other.toFloat();
}

Fixed	Fixed::operator*(const Fixed& other) const{
	return this->toFloat() * other.toFloat();
}

Fixed	Fixed::operator/(const Fixed& other) const{
	return this->toFloat() / other.toFloat();	std::cout << "Destructor called" << std::endl;
}

// increment and decrement operators

Fixed&	Fixed::operator++(){
	++this->_fixedPoint;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed	tmp(*this);
	tmp.setRawBits(this->_fixedPoint++);
	return tmp;
}

Fixed&	Fixed::operator--(){
	--this->_fixedPoint;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);
	tmp.setRawBits(this->_fixedPoint--);
	return tmp;
}

// public overloaded member functions min max

Fixed	Fixed::min(Fixed& other1, Fixed& other2){
	if (other1.getRawBits() >= other2.getRawBits())
		return other1;
	else
		return other2;
}

Fixed	Fixed::min(const Fixed& other1, const Fixed& other2){
	if (other1.getRawBits() >= other2.getRawBits())
		return other1;
	else
		return other2;
}

Fixed	Fixed::max(Fixed& other1, Fixed& other2){
	if (other1.getRawBits() < other2.getRawBits())
		return other2;
	else
		return other1;
}

Fixed	Fixed::max(const Fixed& other1, const Fixed& other2){
	if (other1.getRawBits() < other2.getRawBits())
		return other2;
	else
		return other1;
}
