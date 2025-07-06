/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:10:57 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:44:59 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &i)
{
	*this = i;
}

Intern &Intern::operator=(const Intern &i)
{
	if (this == &i)
		return *this;
	return *this;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	int i;
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (i = 0; i < 3; i++)
	{
		if (!forms[i].find(form))
			break;
	}
	AForm* result = NULL;
	switch (i)
	{
		case 0:
			result = new ShrubberyCreationForm(target);
			break;
		case 1:
			result = new RobotomyRequestForm(target);
			break;
		case 2:
			result = new PresidentialPardonForm(target);
			break;
		default:
			throw FormNotFoundException();
	}
	if (result != NULL)
		std::cout << "Intern creates " << form << std::endl;
	return result;
}
