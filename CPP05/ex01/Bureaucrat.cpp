/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:23:38 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:40:43 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade)
{
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	if (this != &bureaucrat)
		this->grade = bureaucrat.grade;
	return *this;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

std::string Bureaucrat::getName() const
{
	return name;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

void Bureaucrat::incrementGrade()
{
	this->grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
