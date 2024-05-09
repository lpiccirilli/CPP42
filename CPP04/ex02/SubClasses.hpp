/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubClasses.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:33 by luca              #+#    #+#             */
/*   Updated: 2024/04/30 12:29:37 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBCLASSES_HPP
#define SUBCLASSES_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		void makeSound() const;
};

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		void makeSound() const ;
};

#endif
