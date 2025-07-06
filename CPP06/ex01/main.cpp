/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:52:55 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 18:38:20 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data data;
	data.s1 = "Ciao";
	data.n = 42;
	std::cout << "data before\n" << data.s1 << "\n" << data.n << std::endl << "------------------------" << std::endl;
	std::cout << "data address= " << &data << std::endl;
	uintptr_t raw = Serialization::serialize(&data);
	std::cout << "serialized address= " << &raw << std::endl;
	Data* ptr = Serialization::deserialize(raw);
	std::cout << "deserialized address= " <<  ptr << std::endl;
	std::cout << "data after" << std::endl << "------------------------" << std::endl;
	std::cout << ptr->n << std::endl;
	std::cout << ptr->s1 << std::endl;
}
