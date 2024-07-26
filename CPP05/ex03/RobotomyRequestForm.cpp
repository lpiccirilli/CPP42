/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:54:54 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 18:24:31 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	if (this == &r)
		return *this;
	this->target = r.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) : AForm(r)
{
	*this = r;
}

void RobotomyRequestForm::execute(Bureaucrat &executor)
{
	int num = 0;
	if (executor.getGrade() > this->getgradeToExectute())
		throw AForm::GradeTooLowException();
	if (this-> getisSigned() == false)
		throw AForm::FormNotSignedException();
	srand(time(NULL));
	num = rand() % 2;
	if (num == 1)
		std::cout << "RobotomyRequestForm has been robotomized" << std::endl;
	else
		std::cout << "RobotomyRequestForm robotomization failed" << std::endl;
}
