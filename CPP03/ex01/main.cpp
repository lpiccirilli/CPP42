/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:45:47 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 22:24:17 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Trap("cane");
	ScavTrap truce = Trap;
	Trap.attack("2");
	truce.attack("2");
	Trap.guardGate();
	Trap.takeDamage(9);
	Trap.beRepaired(11);
}
