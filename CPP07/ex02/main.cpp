/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:40:47 by luca              #+#    #+#             */
/*   Updated: 2025/01/23 14:10:57 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
	try
	{
		int *a = new int();
		std::cout << *a << std::endl;
		Array <int>intArray(100);
		Array <int>copia(intArray);
		for (int i = 0; i < 100; i++)
			intArray[i] = i;
		std::cout << copia[2] << std::endl;
		std::cout << intArray[2] << std::endl;
		std::cout << intArray.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
