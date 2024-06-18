/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:07:19 by luca              #+#    #+#             */
/*   Updated: 2024/06/18 16:21:46 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

Contact::Contact(std::string f_name, std::string l_name, std::string nickname, std::string number, std::string dark_secret)
{
	this->f_name = f_name;
	this->l_name = l_name;
	this->nickname = nickname;
	this->number = number;
	this->dark_secret = dark_secret;
}

std::string Contact::get_f_name()
{
	return (this->f_name);
}

std::string Contact::get_l_name()
{
	return (this->l_name);
}
std::string Contact::get_nickname()
{
	return (this->nickname);
}
std::string Contact::get_number()
{
	return (this->number);
}
std::string Contact::get_dark_secret()
{
	return (this->dark_secret);
}

void	Contact::print_searched()
{
	std::cout << "NAME : " << this->f_name << std::endl;
	std::cout <<"LAST NAME : " << this->l_name << std::endl;
	std::cout << "NICKNAME : " << this->nickname << std::endl;
	std::cout << "NUMBER : " << this->number << std::endl;
	std::cout << "DARK SECRET : " << this->dark_secret << std::endl;
}
