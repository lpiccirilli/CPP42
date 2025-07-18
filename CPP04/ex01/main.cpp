/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:48 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:04:20 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	int n = 0;
	Animal *array[10];
	for (n = 0; n < 5; n++)
		array[n] = new Dog();
	for (n = 5; n < 10; n++)
		array[n] = new Cat();
	for (n = 0; n < 10; n++)
		delete (array[n]);
	Dog basic;
	{
		basic.setBrain("cane", 0);
		Dog tmp = basic;
		Brain *b = basic.getBrain();
		std::cout << b->getIdea(0) << std::endl;
	}
}
