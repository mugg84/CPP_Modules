/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:15:08 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/20 08:22:55 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed crossProduct(Point A, Point B, Point P) {
	return (B.getX() - A.getX()) * (P.getY() - A.getY()) - (B.getY() - A.getY()) * (P.getX() - A.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	const Fixed cross1 = crossProduct(a, b, point);
	const Fixed cross2 = crossProduct(b, c, point);
	const Fixed cross3 = crossProduct(c, a, point);

	bool has_neg = (cross1 <= 0) || (cross2 <= 0) || (cross3 <= 0);
	bool has_pos = (cross1 > 0) || (cross2 > 0) || (cross3 > 0);

	return !(has_neg && has_pos);
}