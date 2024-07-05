/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:48:10 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 17:52:55 by luca             ###   ########.fr       */
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

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	_Name = scavtrap._Name;
	_hit_points = scavtrap._hit_points;
	_energy_points = scavtrap._energy_points;
	_attack_damage = scavtrap._attack_damage;
	return *this;
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
