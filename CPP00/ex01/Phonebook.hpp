/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:38:45 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 16:19:23 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Phonebook_hpp
#define Phonebook_hpp

#include "contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		int	index;
		int	num_contacts;
		void	add_contact();
		void	search_contact();
		void	print_dot(std::string str);
};

#endif
