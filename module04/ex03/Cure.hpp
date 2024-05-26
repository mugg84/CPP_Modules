/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:34:55 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/26 13:02:54 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(Cure const &other);
		Cure &operator=(Cure const &other);
		virtual	~Cure();

		AMateria* clone() const; //TODO: virtual?
		void use(ICharacter& target);
};