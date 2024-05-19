/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:15:14 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/19 14:34:07 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(const Fixed f1, const Fixed f2) : _x(f1.getRawBits()), _y(f2.getRawBits()){}

Point::Point(const Point& other){
	
}

Point& Point::operator=(const Point& other){
	
}

Point::~Point(){
	
}
