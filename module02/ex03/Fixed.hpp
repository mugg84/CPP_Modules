/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:40:10 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/20 08:34:29 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
# define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed	min(Fixed& other1, Fixed& other2);
		static Fixed	min(const Fixed& other1, const Fixed& other2);
		static Fixed	max(Fixed& other1, Fixed& other2);
		static Fixed	max(const Fixed& other1, const Fixed& other2);
		
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream & operator<<(std::ostream& o, const Fixed& i);

#endif