/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:07:19 by luca              #+#    #+#             */
/*   Updated: 2024/04/16 18:08:56 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{

}

contact::~contact()
{

}

void contact::print_searched()
{
	std::cout << "NAME=        " << this->f_name << std::endl;
	std::cout << "LAST NAME=   " << this->l_name << std::endl;
	std::cout << "NICKNAME=    " << this->nickname << std::endl;
	std::cout << "NUMBER=      " <<this->number << std::endl;
	std::cout << "DARK SECRET= " << this->dark_secret << std::endl;
}

std::string	contact::check_len(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return str;
}

void contact::print_search()
{
	std::cout << "|" << std::setw(10) << this->index;
	std::cout << "|" << std::setw(10) << check_len(this->f_name);
	std::cout << "|" << std::setw(10) << check_len(this->l_name);
	std::cout << "|" << std::setw(10) << check_len(this->nickname) << "|\n";
}

std::string contact::get_input(std::string str)
{
	std::string input;
	std::cout << "please enter your " << str;
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (input);
}

void contact::add_data(int index)
{
	this->index = index;
	this->f_name = get_input("first name > ");
	this->l_name = get_input("last name > ");
	this->nickname = get_input("nickname > ");
	this->number = get_input("number > ");
	this->dark_secret = get_input ("dark secret > ");
}
