/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:43:13 by luca              #+#    #+#             */
/*   Updated: 2024/08/14 17:40:22 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

template <typename T>
class Array
{
	private:
		T *array;
		int index;
	public:
		Array();
		Array(int n);
		Array(Array const &other);
		Array<T> operator=(Array<T> const &other);
		T &operator[](int index);
		int size() const;
		~Array();
};

template <typename T>
Array<T>::Array()
{
	array = NULL;
	index = 0;
}

template <typename T>
Array<T>::Array(int n)
{
	array = new T[n];
	index = n;
	for (int i = 0; i < n; i++)
		array[i] = 0;
}

template <typename T>
Array<T>::Array(Array const &other)
{
	index = other.index;
	this->array = new T[other.index];
}

template <typename T>
Array<T> Array<T>::operator=(Array<T> const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		delete[] this->array;
		this->array = new T[other.index];
		for (int i = 0; i < other.index; i++)
			this->array[i] = other.array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](int index)
{
	if (index >= this->index || index < 0)
		throw std::out_of_range("Index out of range");
	return array[index];
}

template <typename T>
int Array<T>::size() const
{
	return index;
}

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

#endif
