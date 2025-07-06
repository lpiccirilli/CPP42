/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:52:12 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 16:34:54 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (this->getIsSigned() == false)
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

std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

