/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:31:13 by luca              #+#    #+#             */
/*   Updated: 2025/01/27 15:33:50 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		int arr[] = {1, 2, 3, 4, 5};
		std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
		sp.addManyNumbers(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << '\n';
	}
}
