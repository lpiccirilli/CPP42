/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:21:54 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 19:30:18 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		AForm *f;
		Bureaucrat b("b", 1);
		RobotomyRequestForm robot("robot");
		PresidentialPardonForm pres("pres");
		Intern i;
		pres.beSigned(b);
		robot.beSigned(b);
		pres.execute(b);
		robot.execute(b);
		f = i.makeForm("RobotomyRequestForm", "home");
		f->beSigned(b);
		f->execute(b);
		delete f;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
