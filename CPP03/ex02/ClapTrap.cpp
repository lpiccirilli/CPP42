/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:46:06 by luca              #+#    #+#             */
/*   Updated: 2024/04/24 14:56:06 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_Name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if ( _hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is dead\n";
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "no energy points left...\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
	_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead\n";
		return ;
	}
	_hit_points -= amount;
	std::cout << "ClapTrap " << this->_Name << " took " << amount << " points of damage" << std::endl;
	if (_energy_points <= 0)
		std::cout << "ClapTrap " << this->_Name << " died\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ( _hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << "is dead\n";
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "no energy points left...\n";
		return ;
	}
	_energy_points--;
	_hit_points += amount;
	std::cout << "ClapTrap " << this->_Name << " repaired itself gaining " << amount << " hp back " << std::endl;
}
