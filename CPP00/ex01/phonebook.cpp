/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:44:02 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 17:02:26 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
	this->num_contacts = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::add_contact()
{
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	number;
	std::string	dark_secret;

	while(f_name.empty())
	{
		std::cout << "PLEASE ENTER FIRST NAME: ";
		std::getline(std::cin, f_name);
	}
	while(l_name.empty())
	{
		std::cout << "PLEASE ENTER LAST NAME: ";
		std::getline(std::cin, l_name);
	}
	while(nickname.empty())
	{
		std::cout << "PLEASE ENTER NICKNAME: ";
		std::getline(std::cin, nickname);
	}
	while(number.empty())
	{
		std::cout << "PLEASE ENTER NUMBER: ";
		std::getline(std::cin, number);
	}
	while(dark_secret.empty())
	{
		std::cout << "PLEASE ENTER DARK SECRET: ";
		std::getline(std::cin, dark_secret);
	}
	this->contacts[this->index] = Contact(f_name, l_name, nickname, number, dark_secret);
	this->index++;
	if (this->index == 8)
		this->index = 0;
	if (this->num_contacts != 8)
		this->num_contacts++;
}

void Phonebook::print_dot(std::string str)
{
	if (str.length() > 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + ".";
	else
		std::cout << std::right << std::setw(10) << str;
}

void	Phonebook::search_contact()
{
	if (this->num_contacts == 0)
	{
		std::cout << "NO CONTACTS" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	for (int i = 0; i < this->num_contacts; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->print_dot(this->contacts[i].get_f_name());
		std::cout << "|";
		this->print_dot(this->contacts[i].get_l_name());
		std::cout << "|";
		this->print_dot(this->contacts[i].get_nickname());
		std::cout << std::endl;
	}
	std::string index;
	std::cout << "PLEASE ENTER INDEX: ";
	while(std::getline(std::cin, index))
	{
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && index[0] - '0' < this->num_contacts)
			break;
		std::cout << "INVALID INDEX, PLEASE ENTER INDEX: ";
	}
	contacts[index[0] - '0'].print_searched();
}
