/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:21:54 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 18:12:43 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Bureaucrat valid("John", 75);
		Bureaucrat low("Low", 100);
		Bureaucrat high("High", 20);

		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robot("target");
		PresidentialPardonForm pardon("criminal");

		shrub.beSigned(high);
		robot.beSigned(high);
		pardon.beSigned(high);

		high.executeForm(shrub);
		high.executeForm(robot);
		high.executeForm(pardon);

		low.executeForm(shrub);
		low.executeForm(robot);

		ShrubberyCreationForm unsigned_form("test");
		high.executeForm(unsigned_form);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
