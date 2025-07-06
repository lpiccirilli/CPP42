/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:43:13 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 18:49:03 by luca             ###   ########.fr       */
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
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		Array<T>& operator=(Array<T> const &other);
		T &operator[](int _size);
		unsigned int size() const;
		~Array();
};

template <class T>
Array<T>::Array()
{
	array = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->array = new T[this->_size];
}

template <typename T>
Array<T>::Array(Array const &other) : _size(other._size)
{
	this->array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; ++i)
	{
		this->array[i] = other.array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &other)
{
	if (this != &other)
	{
		delete[] this->array;
		this->_size = other._size;
		this->array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i)
		{
			this->array[i] = other.array[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](int _size)
{
	if (_size < 0 ||static_cast <unsigned int>(_size) >= this->_size)
		throw std::out_of_range("index out of range");
	return array[_size];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

#endif
