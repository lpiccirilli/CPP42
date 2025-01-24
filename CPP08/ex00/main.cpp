/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:03:50 by luca              #+#    #+#             */
/*   Updated: 2025/01/24 17:30:06 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> ar;
	ar.push_back(1);
	ar.push_back(3);
	ar.push_back(2);
	std::deque<int> ar2;
	ar2.push_back(1);
	ar2.push_back(3);
	ar2.push_back(2);
	if (easyfind(ar, 4) == -1)
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Found" << std::endl;
	if (easyfind(ar2, 3) == -1)
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Found" << std::endl;
	return 0;
}
