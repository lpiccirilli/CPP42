/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:34:10 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 16:03:43 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::string Form::getName() const
{
	return name;
}

bool Form::getisSigned() const
{
	return isSigned;
}

int Form::getgradeToSign() const
{
	return gradeToSign;
}

int Form::getgradeToExectute() const
{
	return gradeToExecute;
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

Form &Form::operator=(Form const &form)
{
	if (this != &form)
	{
		this->isSigned = form.getisSigned();
		this->gradeToExecute = form.getgradeToExectute();
		this->gradeToSign = form.getgradeToSign();
	}
	return *this;
}

Form::~Form()
{
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	if (form.getisSigned() == true)
		os << "Form " << form.getName() << "\n\tis signed: yes\n\tGrade to sign: " << form.getgradeToSign() << "\n\tGrade to execute: " << form.getgradeToExectute();
	else
		os << "Form " << form.getName() << "\n\tis signed: no\n\tGrade to sign: " << form.getgradeToSign() << "\n\tGrade to execute: " << form.getgradeToExectute();
	return os;
}

Form::Form(const Form& form): name(form.name), isSigned(form.isSigned), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute)
{}
