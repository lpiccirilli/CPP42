/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:09:19 by luca              #+#    #+#             */
/*   Updated: 2025/01/24 16:47:19 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char array[] = "Hello";
	::iter(array, 6, print);
	std::cout << std::endl;
	int array2[] = {1, 2, 3, 4, 5};
	::iter(array2, 5, print);
	std::cout << std::endl;
	std::string array3[] = {"Ciao", "Mondo"};
	::iter(array3, 2, print);
	std::cout << std::endl;
	char *array4 = NULL;
	::iter(array4, 1, print);
	std::cout << std::endl;
	return 0;
}
