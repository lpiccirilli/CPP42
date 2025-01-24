/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:56:19 by luca              #+#    #+#             */
/*   Updated: 2025/01/24 18:00:43 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
}

void Span::addNumber(int n)
{
	if (array.size() < N)
	{
		array.push_back(n);
	}
	else
		throw std::exception();
}

int Span::longestSpan()
{
	if (array.size() < 2)
		throw std::exception();
	std::vector<int>::iterator min = std::min_element(array.begin(), array.end());
	std::vector<int>::iterator max = std::max_element(array.begin(), array.end());
	return *max - *min;
}

int Span::shortestSpan()
{
	if (array.size() < 2)
		throw std::exception();
	std::sort(array.begin(), array.end());
	int res = array[1] - array[0];
	for (unsigned int i = 0; i < array.size() - 1; i++)
	{
		if (array[i + 1] - array[i] < res)
			res = array[i + 1] - array[i];
	}
	return res;
}
