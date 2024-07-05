/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubClasses.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:47:22 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:43:08 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubClasses.hpp"

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

Dog::Dog(const Dog &dog) : AAnimal(dog)
{
	this->brain = new Brain(*dog.brain);
	this->type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return *this;
	delete this->brain;
	this->brain = new Brain(*dog.brain);
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

Cat::Cat(const Cat &cat) : AAnimal(cat)
{
	this->brain = new Brain(*cat.brain);
	this->type = cat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	delete this->brain;
	this->brain = new Brain(*cat.brain);
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

