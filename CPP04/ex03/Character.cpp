/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:59:40 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:52:16 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	for (int i = 0; i < 200; i++)
		this->floor[i] = 0;
	std::cout << "Character constructor created " << name << std::endl;
}

Character::Character(const Character &toCopy)
{
	this->name = toCopy.name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = toCopy.inventory[i];
	for (int i = 0; i < 200; i++)
		this->floor[i] = toCopy.floor[i];
	std::cout << "Character copy constructor created " << name << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	for (int i = 0; i < 200; i++)
		delete floor[i];
	std::cout << "Character destructor called" << std::endl;
}

void Character::equip(AMateria* m)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (this->inventory[i] == 0)
			this->inventory[i] = m;
	}
}

void Character::unequip(int idx)
{
	int i = 0;
	while(this->floor[i] != 0)
		i++;
	this->floor[i] = this->inventory[idx];
	if (idx > 0 && idx < 4)
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 0 && idx < 4 && this->inventory[idx] != 0)
	{
		this->inventory[idx]->use(target);
		return ;
	}
}

std::string const & Character::getName() const
{
	return this->name;
}
