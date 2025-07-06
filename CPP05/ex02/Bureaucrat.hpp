/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:22:03 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 16:36:58 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm& f);
		void executeForm(AForm const & form);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
