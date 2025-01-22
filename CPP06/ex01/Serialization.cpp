/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:52:38 by luca              #+#    #+#             */
/*   Updated: 2025/01/22 16:49:47 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{
}

Serialization::~Serialization()
{
}

Serialization& Serialization::operator=(const Serialization& other)
{
	(void)other;
	return *this;
}

Serialization::Serialization(const Serialization& other)
{
	if (this != &other)
		*this = other;
}

uintptr_t Serialization::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialization::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
