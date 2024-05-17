/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:18 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/17 10:06:06 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_
# define HARL_HPP_

#include <iomanip>
#include <iostream>

#define	DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define	INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define	WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define	ERROR "This is unacceptable! I want to speak to the manager now."
#define	WR_INPUT "[ Probably complaining about insignificant problems ]"
#define ERROR_MESS "Wrong input. Enter only one argument"

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
};

#endif