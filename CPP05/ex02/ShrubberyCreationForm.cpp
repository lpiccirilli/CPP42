/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:52:12 by luca              #+#    #+#             */
/*   Updated: 2024/07/16 16:46:28 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::ofstream outfile (target + "_shrubbery");
	outfile <<"daje" << std::endl;
	outfile.close();
}

ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	
}
