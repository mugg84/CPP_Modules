/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:26:03 by vboxuser1         #+#    #+#             */
/*   Updated: 2024/05/13 11:10:40 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int			_index;
		void		_formatTen(std::string str) const;
	public:
		Contact();
		void		init(void);
		void		setIndex(int i);
		void		printContacts(void) const;
		void		printSingleContact(void) const;
		void		print_ast(int i) const;
		bool		isEmpty(void) const;
		std::string	getInput(std::string str);
		~Contact();
};

#endif