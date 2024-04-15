/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:07:19 by luca              #+#    #+#             */
/*   Updated: 2024/04/15 18:40:28 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{

}

contact::~contact()
{

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
