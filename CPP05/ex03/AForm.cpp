/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:34:10 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 18:21:05 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, const int gradeToSign, const int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToExecute < 1 || gradeToSign < 1)
		throw GradeTooHighException();
}

AForm::~AForm()
{

}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}

std::string AForm::getName()
{
	return name;
}

bool AForm::getisSigned() const
{
	return isSigned;
}

int AForm::getgradeToSign()
{
	return gradeToSign;
}

int AForm::getgradeToExectute()
{
	return gradeToExecute;
}

void AForm::beSigned(Bureaucrat& b)
{
	if (isSigned == true)
	{
		std::cout << b.getName() << " couldn't sign " << name << " because it's already signed" << std::endl;
		return ;
	}
	if (gradeToSign < b.getGrade())
	{
		std::cout << b.getName() << " couldn't sign " << name << " because his grade is too low" << std::endl;
		throw AForm::GradeTooLowException();
	}
	std::cout << b.getName() << " signed " << name << std::endl;
	isSigned = true;
}

AForm &AForm::operator=(AForm const &form)
{
	if (this != &form)
		this->isSigned = form.getisSigned();
	return *this;
}

AForm::AForm(const AForm &form) : name(form.name), isSigned(form.isSigned), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute)
{
	*this = form;
}

