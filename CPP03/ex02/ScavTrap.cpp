/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:48:10 by luca              #+#    #+#             */
/*   Updated: 2024/04/24 14:54:15 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode\n";
}

void ScavTrap::attack(std::string target)
{
	if ( _hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_Name << " is dead\n";
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "no energy points left...\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
	_energy_points--;
}
