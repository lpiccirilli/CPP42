/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:48:45 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:56:20 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{

}

void AMateria::use(ICharacter &target)
{
	std::cout<<"* Using "<<this->type<<" materia on "<<target.getName()<< " *"<<std::endl;
}

Ice::Ice()
{
	this->type = "ice";
}

Cure::Cure()
{
	this->type = "cure";
}

Ice *Ice::clone() const
{
	Ice *newIce = new Ice;
	return (newIce);
}

Cure *Cure::clone() const
{
	Cure *newCure = new Cure;
	return (newCure);
}

void Ice::use(ICharacter& character)
{
	std::cout << "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
}

void Cure::use(ICharacter& character)
{
	std::cout << "* heals "<< character.getName() << "'s wounds *" << std::endl;
}

AMateria* AMateria::clone() const
{
	if (this->getType() == "ice")
		return new Ice();
	if (this->getType() == "cure")
		return new Cure();
	return 0;
}
