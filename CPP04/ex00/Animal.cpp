/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:50:53 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 23:30:04 by luca             ###   ########.fr       */
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

Animal& Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "cats don’t bark\n";
}

std::string Animal::getType() const
{
	return this->type;
}
