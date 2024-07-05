/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:48 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:46:18 by luca             ###   ########.fr       */
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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal k;
	delete j;//should not create a leak
	delete i;
}
