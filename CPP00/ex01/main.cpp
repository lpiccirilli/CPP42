/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:18:46 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 15:56:26 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "contact.hpp"

int	main()
{
	Phonebook phone;
	std::string input = "";
	while(input.compare("EXIT") != 0)
	{
		std::cout << "PLEASE ENTER ADD, SEARCH OR EXIT: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			break;
		}
		if (input.compare("ADD") == 0)
			phone.add_contact();
		 if (input.compare("SEARCH") == 0)
		 	phone.search_contact();
	}
}
