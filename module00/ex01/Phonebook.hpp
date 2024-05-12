/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser1 <vboxuser1@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:04:13 by mmughedd          #+#    #+#             */
/*   Updated: 2024/05/12 16:39:55 by vboxuser1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact _contacts[8];
	public:
		PhoneBook();
		void addContact(void);
		void searchContact(void) const;
		void loopExit(void) const;
		void initMsg(void) const;
		~PhoneBook();
};

#endif