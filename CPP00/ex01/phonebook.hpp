/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:38:45 by luca              #+#    #+#             */
/*   Updated: 2024/04/15 17:50:50 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "contact.hpp"

class phonebook
{
	private:
		contact contacts[8];
		int	index;
	public:
		phonebook();
		void	print_book();
		void	add_contact();
		void	search_contact();
		~phonebook();
};

#endif
