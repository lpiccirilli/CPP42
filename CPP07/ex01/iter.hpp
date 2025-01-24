/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:09:25 by luca              #+#    #+#             */
/*   Updated: 2025/01/24 16:46:21 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void print(T const &x) {
	std::cout << x;
}

template <typename T>
void iter(T *array, int size, void (*f)(T const &))
{
	if (array == NULL || f == NULL)
		return;
	for (int i = 0; i < size; i++)
	{
			f(array[i]);
	}

}

#endif
