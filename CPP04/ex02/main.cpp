/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:49:48 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:12:04 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

int main()
{
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	// AAnimal dog;
	delete dog;
	delete cat;
}
