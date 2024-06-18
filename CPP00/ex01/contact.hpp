/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:50:38 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 16:19:15 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <limits>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <string>
#include <sstream>
#include <climits>


class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string number;
		std::string dark_secret;
		int	index;
	public:
		Contact();
		~Contact();
		Contact(std::string f_name, std::string l_name, std::string nickname, std::string number, std::string dark_secret);
		std::string get_f_name();
		std::string get_l_name();
		std::string get_nickname();
		std::string get_number();
		std::string get_dark_secret();
		// std::string check_len(std::string str);
		// void add_data(int index);
		// std::string get_input(std::string str);
		// void print_search();
		void print_searched();
};

#endif
