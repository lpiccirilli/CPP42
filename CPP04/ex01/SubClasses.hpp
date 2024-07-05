/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubClasses.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:33 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:35:37 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBCLASSES_HPP
#define SUBCLASSES_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog& operator=(const Dog& dog);
		Dog(const Dog& dog);
		void makeSound() const;
};

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat& operator=(const Cat& cat);
		Cat(const Cat& cat);
		void makeSound() const ;
};

#endif
