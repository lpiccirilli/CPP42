/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:34:10 by luca              #+#    #+#             */
/*   Updated: 2024/07/15 18:59:04 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToExecute < 1 || gradeToSign < 1)
		throw GradeTooHighException();
}
const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::string Form::getName()
{
	return name;
}

bool Form::getisSigned() const
{
	return isSigned;
}

int Form::getgradeToSign()
{
	return gradeToSign;
}

int Form::getgradeToExectute()
{
	return gradeToExecute;
}

void Form::beSigned(Bureaucrat& b)
{
	if (gradeToSign >= b.getGrade())
		GradeTooLowException();
	if (isSigned == true)
		return ;
	isSigned = true;
}

Form &Form::operator=(Form const &form)
{
	if (this != &form)
		this->isSigned = form.getisSigned();
	return *this;
}

Form::Form(const Form &form) : name(form.name), isSigned(form.isSigned), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute)
{
	*this = form;
}
