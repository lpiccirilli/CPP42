/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:44:02 by luca              #+#    #+#             */
/*   Updated: 2024/04/15 17:51:07 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
	this->index = 0;
}

phonebook::~phonebook()
{

}

void phonebook::print_book()
{

}

void phonebook::add_contact()
{
	if (this->index == 7)
		this->index = 0;
	this->contacts[this->index].add_data(this->index);
	this->index += 1;
}

void phonebook::search_contact()
{
	
}
