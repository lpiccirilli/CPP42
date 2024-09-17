/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:56:41 by luca              #+#    #+#             */
/*   Updated: 2024/08/15 14:11:02 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_CPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <ctime>

class Span
{
	private:
		std::vector<int> array;
		unsigned int N;
	public:
		Span(unsigned int N);
		int longestSpan();
		int shortestSpan();
		void addNumber(int n);
};

#endif
