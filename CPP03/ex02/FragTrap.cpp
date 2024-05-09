/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:39:04 by luca              #+#    #+#             */
/*   Updated: 2024/04/24 14:57:59 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _Name << " looking for a high five"<< std::endl;
}

void FragTrap::attack(std::string target)
{
		if ( _hit_points <= 0)
	{
		std::cout << "FragTrap " << this->_Name << " is dead\n";
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "no energy points left...\n";
		return ;
	}
	std::cout << "FragTrap " << this->_Name << " attacks " << target << " causing " << this->_attack_damage << " points of damage" << std::endl;
	_energy_points--;
}
