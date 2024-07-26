/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:11:06 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 19:23:37 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

class Intern
{
	public:
		Intern();
		Intern &operator=(const Intern &i);
		Intern(const Intern &i);
		AForm *makeForm(std::string form, std::string target);
		~Intern();
		class FormNotFoundException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Form not found";
			}
		};
};

#endif
