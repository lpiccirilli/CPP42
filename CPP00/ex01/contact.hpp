/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:50:38 by luca              #+#    #+#             */
/*   Updated: 2024/04/16 18:41:32 by luca             ###   ########.fr       */
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
		~contact();
		std::string check_len(std::string str);
		void add_data(int index);
		std::string get_input(std::string str);
		void print_search();
		void print_searched();
};

#endif
