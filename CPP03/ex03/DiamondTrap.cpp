/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:57:56 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 23:20:29 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)  : ClapTrap(name + "_clap_name"),ScavTrap(name) , FragTrap(name)
{
	this->name = name;
	std::cout<<"DiamondTrap "<< name <<" created with default constructor"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap "<< name <<" destructor called"<<std::endl;
}

DiamondTrap&  DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	if (this == &toCopy)
		return *this;
	this->name = toCopy.name;
	this->_hit_points = toCopy._hit_points;
	this->_energy_points = toCopy._energy_points;
	this->_attack_damage = toCopy._attack_damage;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
	if (this == &toCopy)
		return ;
	this->name = toCopy.name;
	std::cout << "DiamondTrap " << name << " created with copy constructor" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
