/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:45:47 by luca              #+#    #+#             */
/*   Updated: 2024/04/24 14:58:31 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ScavTrap dio("cane");
	dio.guardGate();
	dio.attack("dio");
	FragTrap dios ("cane");
	dios.highFivesGuys();
	dios.attack("dio");
}
