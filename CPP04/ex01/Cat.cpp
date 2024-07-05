/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 23:23:09 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:02:17 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	this->brain = new Brain(*cat.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		delete this->brain;
		this->brain = new Brain(*cat.brain);
		this->type = cat.type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miao\n";
}

