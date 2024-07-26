/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:21:57 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 18:23:01 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	if (this == &p)
		return *this;
	this->target = p.target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : AForm(p)
{
	*this = p;
}

void PresidentialPardonForm::execute(Bureaucrat &b)
{
	if (b.getGrade() > this->getgradeToExectute())
		throw AForm::GradeTooLowException();
	if (this->getisSigned() == false)
		throw AForm::FormNotSignedException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

