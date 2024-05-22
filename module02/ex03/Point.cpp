/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:15:14 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/21 13:23:40 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)){}

Point::Point(const Point& other) : _x(other.getX()), _y(other.getY()){}

Point& Point::operator=(const Point &other){
	if (this == &other)
		return *this;
	(Fixed)this->_x = other.getX();
	(Fixed)this->_y = other.getY();
	return *this;
}

Point::~Point(){}

Fixed	Point::getX() const{
	return this->_x;
}

Fixed	Point::getY() const{
	return this->_y;
}