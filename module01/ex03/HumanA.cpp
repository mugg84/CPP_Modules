/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:01:07 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/16 08:08:21 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon  &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << HumanA::_name << " attacks with their " << HumanA::_weapon->getType() << std::endl;
}
