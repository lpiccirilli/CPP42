/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:56:19 by luca              #+#    #+#             */
/*   Updated: 2024/08/15 16:39:54 by luca             ###   ########.fr       */
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
	return max - min;
}

int Span::shortestSpan()
{
	if (array.size() < 2)
		throw std::exception();
	std::sort(array.begin(), array.end());
	int tmp;
	for (size_t i = 0; i < N - 1; i++)
	{
		if (tmp > (array[i + 1] - array[i]))
			tmp = array[i + 1] - array[i];
	}
	return tmp;
}
