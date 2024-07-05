/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:10 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:04:54 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal& operator=(const Animal& animal);
		virtual void makeSound() const;
		std::string getType() const;
};

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#endif
