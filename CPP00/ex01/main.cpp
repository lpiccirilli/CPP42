/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:18:46 by luca              #+#    #+#             */
/*   Updated: 2024/04/13 19:18:50 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main()
{
	phonebook phone;
	std::string input;
	std::cout << "PLEASE ENTER ADD, SEARCH OR EXIT: ";
	std::cin >> input;
	while(input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
		{
			phone.add();
		}
	}
}
