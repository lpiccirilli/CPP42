/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:48:45 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 23:20:44 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavtrap);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scavtrap);
	void guardGate();
	void attack(std::string name);
};

#endif
