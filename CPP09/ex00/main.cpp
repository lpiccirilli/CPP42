/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:08:09 by luca              #+#    #+#             */
/*   Updated: 2024/08/15 18:15:00 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
	if (ac != 2)
	{
		std::cerr << "missing input" << std::endl;
		return 1;
	}
	BitcoinExchange Bitcoin;
	Bitcoin.get_input(av[1]);
}

