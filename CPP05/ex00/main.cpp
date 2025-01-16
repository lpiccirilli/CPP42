/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:21:54 by luca              #+#    #+#             */
/*   Updated: 2025/01/16 17:00:53 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Luca("Luca", 1);
		Bureaucrat Bob("Bob", 150);
		Bob = Luca;
		std::cout << Luca << std::endl;
		std::cout << Bob << std::endl;
		Luca.decrementGrade();
		Bob.incrementGrade();
		std::cout << Luca << std::endl;
		std::cout << Bob << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
