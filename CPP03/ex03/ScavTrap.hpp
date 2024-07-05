/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:48:45 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:08:01 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scavtrap);
	void guardGate();
	void attack(std::string name);
};

#endif
