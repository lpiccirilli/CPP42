/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:34:10 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:34:28 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &form)
	: name(form.name), isSigned(form.isSigned), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute){
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

std::string AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

void AForm::beSigned(Bureaucrat& b)
{
	if (gradeToSign < b.getGrade())
		throw AForm::GradeTooLowException();
	isSigned = true;
}

AForm &AForm::operator=(AForm const &form)
{
	if (this != &form)
		this->isSigned = form.getIsSigned();
	return *this;
}


std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << form.getName() << " form, signed: " << (form.getIsSigned() ? "yes" : "no") << ", grade to sign: " << form.getGradeToSign()<< ", grade to execute: " << form.getGradeToExecute();
	return os;
}
