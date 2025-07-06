/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:21:54 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:36:10 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("b", 1);
		ShrubberyCreationForm dio("home");
		RobotomyRequestForm robot("robot");
		PresidentialPardonForm pres("pres");
		dio.beSigned(b);
		pres.beSigned(b);
		robot.beSigned(b);
		dio.execute(b);
		pres.execute(b);
		robot.execute(b);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
