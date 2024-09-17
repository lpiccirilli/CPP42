/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:40:47 by luca              #+#    #+#             */
/*   Updated: 2024/08/14 17:41:53 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
	try
	{
		Array <int>intArray(100);
		Array <int>copia(intArray);
		for (int i = 0; i < 100; i++)
			intArray[i] = i;
		copia[-2] = 42;
		std::cout << copia[2] << std::endl;
		std::cout << intArray[2] << std::endl;
		std::cout << intArray.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
