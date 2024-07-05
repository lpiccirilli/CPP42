/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 23:17:30 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:09:22 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		~Dog();
		Dog& operator=(const Dog& dog);
		Dog(const Dog& dog);
		void makeSound() const;
		Brain* getBrain() const;
		void setBrain(std::string idea, int index);
	private:
		Brain *brain;
};

#endif
