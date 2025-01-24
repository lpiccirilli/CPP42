/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:40:47 by luca              #+#    #+#             */
/*   Updated: 2025/01/24 17:26:25 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
	try
	{
		Array <int>intArray(100);
		for (int i = 0; i < 100; i++)
			intArray[i] = i;
		Array <int>copia(intArray);
		std::cout << intArray[4] << std::endl;
		std::cout << copia[4] << std::endl;
		std::cout << intArray.size() << std::endl;
		std::cout << copia.size() << std::endl;
		std::cout << intArray[99] << std::endl;
		std::cout << copia[99] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
