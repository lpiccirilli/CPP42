/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubClasses.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:47:22 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 18:01:20 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return *this;
}

Cat::Cat()
{
	this->brain = new Brain();
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miao\n";
}

void Dog::makeSound() const
{
	std::cout << "bau\n";
}

