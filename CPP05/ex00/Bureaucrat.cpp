/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:32:17 by luca              #+#    #+#             */
/*   Updated: 2024/06/24 19:55:39 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string	Bureaucrat::getName()
{
	return this->name;
}

int	Bureaucrat::getGrade()
{
	return this->grade;
}

void	Bureaucrat::incrementGrade(Bureaucrat &b)
{
	b.grade--;
}

void	Bureaucrat::decrementGrade(Bureaucrat &b)
{
	b.grade++;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
