/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:26:11 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/16 10:54:02 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP_
# define SED_HPP_

#include <fstream>
# include <iostream>

class	Sed
{
	public:
		Sed();
		~Sed();
		static int	replace(std::string const filename, std::string const s1, std::string const s2);
		static int	printError(std::string str);
};

#endif