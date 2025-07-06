/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:21:57 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:38:07 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


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

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : AForm(p)
{
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	if (b.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}
