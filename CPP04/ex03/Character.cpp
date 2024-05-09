/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:59:40 by luca              #+#    #+#             */
/*   Updated: 2024/05/06 15:28:25 by luca             ###   ########.fr       */
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
