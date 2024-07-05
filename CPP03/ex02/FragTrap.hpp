/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:38:38 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 23:01:04 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap& operator=(const FragTrap& fragtrap);
	FragTrap(const FragTrap& fragtrap);
	void highFivesGuys(void);
	void attack(std::string target);
};

#endif
