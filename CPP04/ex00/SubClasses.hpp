/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubClasses.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:33 by luca              #+#    #+#             */
/*   Updated: 2024/04/26 14:18:39 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBCLASSES_HPP
#define SUBCLASSES_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		void makeSound() const ;
};

#endif
