/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:46:27 by luca              #+#    #+#             */
/*   Updated: 2024/04/20 15:06:22 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
}

void Harl::info( void )
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning( void )
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error( void )
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (type[i].compare(level) == 0)
			(this->*f[i])();
	}
}
