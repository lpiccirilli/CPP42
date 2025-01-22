/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:52:55 by luca              #+#    #+#             */
/*   Updated: 2025/01/22 17:30:39 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data data;
	data.s1 = "Ciao";
	data.n = 42;
	std::cout << &data << std::endl;
	uintptr_t raw = Serialization::serialize(&data);
	Data* ptr = Serialization::deserialize(raw);
	std::cout << ptr << std::endl;
	std::cout << ptr->n << std::endl;
	std::cout << ptr->s1 << std::endl;
}
