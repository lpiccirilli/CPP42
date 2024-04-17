/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:44:02 by luca              #+#    #+#             */
/*   Updated: 2024/04/17 12:28:35 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
	this->index = 0;
	this->num_contacts = 0;
}

phonebook::~phonebook()
{

}

void phonebook::add_contact()
{
	if (this->index == 8)
		this->index = 0;
	this->contacts[this->index].add_data(this->index);
	this->index += 1;
	if (this->index == 7)
		return ;
	this->num_contacts+= 1;
}

void phonebook::search_contact()
{
	int num = -1;
	std::string str;
	bool good_index = false;
	if (index == 0)
	{
		std::cout << "no contancts to search\n";
		return ;
	}
	std::cout << "|     index|      name|  lastname|  nickname|" << std::endl;
	for (int i = 0; i < this->num_contacts; i++)
		contacts[i].print_search();
	while(!good_index)
	{
		std::cout << "enter index > ";
		std::cin >> num;
		if (num > -1 && num <= num_contacts)
			good_index = true;
		std::cin.clear();
	}
	this->contacts[num].print_searched();
}
