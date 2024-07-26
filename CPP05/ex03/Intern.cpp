/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:10:57 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 19:25:01 by luca             ###   ########.fr       */
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
	switch (i)
	{
		case 0:
			return new ShrubberyCreationForm(target);
			break;
		case 1:
			return new RobotomyRequestForm(target);
			break;
		case 2:
			return new PresidentialPardonForm(target);
			break;
		default:
			throw FormNotFoundException();
			break;
	}
	return NULL;
}
