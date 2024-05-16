/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:18 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/16 11:56:18 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_
# define HARL_HPP_

#include <iomanip>
#include <iostream>

class	Harl
{
	public:
		Harl();
		void	complain(std::string level);
		~Harl();
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		static	void	(Harl::*functionPointers[4])() = {&debug, &info, &warning, &error};
};

#endif