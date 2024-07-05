/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:48 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 14:46:51 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

int main()
{
	int i = 0;
	AAnimal *array[10];
	for (i = 0; i < 5; i++)
		array[i] = new Dog();
	for (i = 5; i < 10; i++)
		array[i] = new Cat();
	for (i = 0; i < 10; i++)
		delete (array[i]);
	// AAnimal dog; //Animal ora non puo essere istanziata
}
