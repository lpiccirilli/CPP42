/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:05:04 by luca              #+#    #+#             */
/*   Updated: 2024/05/03 18:11:37 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice: public AMateria
{
	public:
		Ice();
		Ice *clone() const;
		void use(ICharacter& character);

};

class Cure: public AMateria
{
	public:
		Cure();
		Cure *clone() const;
		void use(ICharacter& character);
};


#endif
