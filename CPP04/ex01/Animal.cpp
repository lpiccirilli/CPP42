/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:50:53 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:40:56 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "faccio suono dai\n";
}

std::string Animal::getType() const
{
	return this->type;
}

Animal Animal::operator=(const Animal *animal)
{
	return (*animal);
}

Animal::Animal(const Animal *animal)
{
	*this = *animal;
}
