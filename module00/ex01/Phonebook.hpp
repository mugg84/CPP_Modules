/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:04:13 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/13 11:35:20 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>

# define WELCOME_MSG 0
# define LOOP_MSG 1
# define EXIT_MSG 2

class	PhoneBook
{
	private:
		Contact _contacts[8];
	public:
		PhoneBook();
		void	addContact(void);
		void	searchContact(void) const;
		void	loopExit(void) const;
		void	printMsg(int i) const;
		~PhoneBook();
};

#endif