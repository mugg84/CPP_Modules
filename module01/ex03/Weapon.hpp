/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:00:53 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/15 12:14:35 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iomanip>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string getType() const;
		void	setType(std::string type);
		
	private:
		std::string	_type;
};

#endif