/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:15:40 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/20 08:27:40 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const float c, const float y);
		Point(const Point& other);
		~Point();
		
		Point& operator=(const Point& other);

		Fixed	getX() const;
		Fixed	getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif