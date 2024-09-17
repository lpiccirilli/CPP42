/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:09:19 by luca              #+#    #+#             */
/*   Updated: 2024/08/14 16:30:57 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char array[] = "Hello";
	iter(array, 6, print);
	int array2[] = {1, 2, 3, 4, 5};
	iter(array2, 5, print);
	std::string array3[] = {"Ciao", "Mondo"};
	iter(array3, 2, print);
	char *array4 = NULL;
	iter(array4, 0, print);
	return 0;
}
