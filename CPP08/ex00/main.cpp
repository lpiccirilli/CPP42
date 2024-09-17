/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:03:50 by luca              #+#    #+#             */
/*   Updated: 2024/08/15 13:56:13 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> ar;
	ar.push_back(1);
	ar.push_back(3);
	ar.push_back(2);
	int ret = easyfind(ar, 1);
	if (ret == -1)
	{
		std::cout << "Not found" << std::endl;
		return -1;
	}
	else
		std::cout << "Found" << std::endl;
	return 0;
}
