/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:48:46 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/26 13:02:23 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(Ice const &other);
		Ice &operator=(Ice const &other);
		virtual	~Ice();

		AMateria* clone() const; //TODO: virtual?
		void use(ICharacter& target);
};