/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:56:41 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 19:34:55 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <ctime>

class Span
{
	private:
		unsigned int N;
		std::vector<int> array;
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		int longestSpan();
		int shortestSpan();
		void addNumber(int n);
		void addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
