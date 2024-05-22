/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:15:50 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/22 09:30:41 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();

		void highFivesGuys(void);
};

#endif