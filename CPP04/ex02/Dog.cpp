/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 23:17:18 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:11:19 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal(dog)
{
	this->brain = new Brain(*dog.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		delete this->brain;
		this->brain = new Brain(*dog.brain);
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "bau\n";
}

Brain* Dog::getBrain() const
{
	return this->brain;
}

void Dog::setBrain(std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}
