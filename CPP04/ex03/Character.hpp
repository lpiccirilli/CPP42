/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:59:50 by luca              #+#    #+#             */
/*   Updated: 2024/05/02 17:03:36 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	protected:
		std::string name;
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	private:
		AMateria *floor[1000];
		AMateria *inventory[4];
	public:
		Character(std::string name);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string const & getName() const;
};

#endif
