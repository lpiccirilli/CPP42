/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:45:47 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 17:50:59 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Trap("Trap");
	Trap.attack("2");
	Trap.takeDamage(9);
	Trap.beRepaired(11);
	Trap.takeDamage(20);
	Trap.attack("2");
}
