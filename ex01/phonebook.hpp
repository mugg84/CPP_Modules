/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:04:13 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/12 14:28:56 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
class	Contact
{
// private:
// 	/* data */
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		
};

class	PhoneBook
{
// private:
// 	/* data */
	private:
		Contact _contacts[8];
	public:
		int last;
		void add(void);
		void search(void) const;
		void loop_exit(void) const;
		void init_msg(void) const;
};

#endif