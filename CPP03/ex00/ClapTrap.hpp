/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:47:13 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 17:50:29 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string _Name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& claptrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
