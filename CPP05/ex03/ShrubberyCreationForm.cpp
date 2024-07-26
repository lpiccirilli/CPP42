/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:52:12 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 18:06:57 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	if (this == &s)
		return *this;
	this->target = s.target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : AForm(s)
{
	*this = s;
}

void ShrubberyCreationForm::execute(Bureaucrat &b)
{
	if (b.getGrade() > this->getgradeToExectute())
		throw AForm::GradeTooLowException();
	if (this->getisSigned() == false)
		throw AForm::FormNotSignedException();
	std::cout << "ShrubberyCreationForm executed" << std::endl;
	std::string filename = this->target + "_shrubbery";
	std::ofstream outfile (filename.c_str());
	outfile <<"       _-_\n"
               "    /~~   ~~\\\n"
               " /~~         ~~\\\n"
               "{                   }\n"
               " \\  _-     -_  /\n"
               "   ~  \\\\ //  ~\n"
               "_- -   | | _- _\n"
               "  _ -  | |   -_\n"
               "      // \\\\\n";
	outfile.close();
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}

