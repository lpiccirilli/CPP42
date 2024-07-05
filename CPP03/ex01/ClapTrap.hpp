/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:47:13 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 21:15:07 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string _Name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
	public:
		void attack(const std::string& target);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& claptrap);
		ClapTrap(const ClapTrap& claptrap);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
