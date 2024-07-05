/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:46:06 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 21:19:53 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name)
{
	_Name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	_Name = claptrap._Name;
	_hit_points = claptrap._hit_points;
	_energy_points = claptrap._energy_points;
	_attack_damage = claptrap._attack_damage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	if (this == &claptrap)
		return ;
	*this = claptrap;
	std::cout << "ClapTrap copy constructor called" << std::endl;
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
