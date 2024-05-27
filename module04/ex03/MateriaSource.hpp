/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:50:26 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/27 11:04:27 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_slots[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		virtual	~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &other);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};