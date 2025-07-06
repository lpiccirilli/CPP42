/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:54:54 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:50:39 by luca             ###   ########.fr       */
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

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int num = 0;
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (this-> getIsSigned() == false)
		throw AForm::FormNotSignedException();
	srand(time(NULL));
	num = rand() % 2;
	std::cout << "Making drilling noises..." << std::endl;
	if (num == 1)
		std::cout << this->target << " has been robotomized successfullt" << std::endl;
	else
		std::cout << this->target << " robotomization failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}
