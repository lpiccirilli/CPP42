/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:38:45 by luca              #+#    #+#             */
/*   Updated: 2024/04/13 18:42:29 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "contact.hpp"

class phonebook
{
	private:
		contact contacts[8];
	public:
		phonebook();
		void	print_book();
		void	add_contact();
		~phonebook();
};


#endif
