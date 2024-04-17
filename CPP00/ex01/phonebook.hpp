/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:38:45 by luca              #+#    #+#             */
/*   Updated: 2024/04/17 12:24:05 by luca             ###   ########.fr       */
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
		int	index;
		int	num_contacts;
		phonebook();
		void	add_contact();
		void	search_contact();
		~phonebook();
};

#endif
