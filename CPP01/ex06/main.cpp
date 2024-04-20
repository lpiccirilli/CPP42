/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:13:46 by luca              #+#    #+#             */
/*   Updated: 2024/04/20 15:35:33 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
	{
		std::cout << "one parameter please" << std::endl;
		return 0;
	}
	std::string str = av[1];
	harl.complain(str);
	return (0);
}
