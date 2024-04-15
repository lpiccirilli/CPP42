/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:50:38 by luca              #+#    #+#             */
/*   Updated: 2024/04/15 18:40:56 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <limits>

class contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string number;
		std::string dark_secret;
		int	index;
	public:
		contact();
		void add_data(int index);
		std::string get_input(std::string str);
		~contact();
};

#endif
