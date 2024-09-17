/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:31:13 by luca              #+#    #+#             */
/*   Updated: 2024/08/15 16:40:34 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp(2);
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << '\n';
	}
}
