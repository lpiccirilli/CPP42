/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:57:53 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 23:20:25 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string name;
		using FragTrap::_hit_points;
		using ScavTrap::_energy_points;
		using FragTrap::_attack_damage;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& diamondtrap);
		DiamondTrap& operator=(const DiamondTrap& diamondtrap);
		void whoAmI();
		using FragTrap::attack;
};

#endif
