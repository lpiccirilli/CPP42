/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:44:02 by luca              #+#    #+#             */
/*   Updated: 2024/04/13 11:56:26 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	search()
{
	std::cout << "search\n";
}

void	add()
{
}

int	main()
{
	std::string input;
	std::cout << "PLEASE ENTER ADD, SEARCH OR EXIT: ";
	std::cin >> input;
	if (input.compare("EXIT") == 0)
	{
		return (0);
	}
	if (input.compare("SEARCH") == 0)
			search();
		else if (input.compare("ADD"))
			add();
}
