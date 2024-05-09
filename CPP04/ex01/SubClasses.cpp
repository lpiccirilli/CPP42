/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubClasses.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:47:22 by luca              #+#    #+#             */
/*   Updated: 2024/04/26 15:51:14 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

void Cat::makeSound() const
{
	std::cout << "miao\n";
}

void Dog::makeSound() const
{
	std::cout << "bau\n";
}

