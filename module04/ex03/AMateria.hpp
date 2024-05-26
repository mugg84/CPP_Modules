/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:33:13 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/26 12:26:39 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ICharacter.hpp>

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		virtual ~AMateria();
	
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};