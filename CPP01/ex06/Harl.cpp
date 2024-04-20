/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:46:27 by luca              #+#    #+#             */
/*   Updated: 2024/04/20 15:41:57 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for(i = 0; i < 4; i++)
	{
		if (type[i].compare(level) == 0)
			break;
	}
	switch (i)
	{
	case 0:
		for(int x = 0; x < 4; x++)
			(this->*f[x])();
		break;
	case 1:
		for(int x = 1; x < 4; x++)
			(this->*f[x])();
		break;
	case 2:
		for(int x = 2; x < 4; x++)
			(this->*f[x])();
		break;
	case 3:
		(this->*f[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
