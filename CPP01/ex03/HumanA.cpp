/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:51:18 by luca              #+#    #+#             */
/*   Updated: 2024/04/20 00:09:16 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}
