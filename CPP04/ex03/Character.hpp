/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:59:50 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:54:30 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
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
		AMateria *floor[200];
		AMateria *inventory[4];
		std::string name;
	public:
		~Character();
		Character(std::string name);
		Character(const Character &toCopy);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string const & getName() const;
};

#endif
