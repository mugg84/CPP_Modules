/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:15:40 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/19 14:32:55 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const Fixed f1, const Fixed f2);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();
};