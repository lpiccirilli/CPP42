/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:12:05 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 15:36:12 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string name;
		bool isSigned;
		int gradeToSign;
		int gradeToExecute;
	public:
		Form(const std::string& name, int gradeToSign, int gradeToExecute);
		Form(const Form& form);
		Form &operator=(const Form& form);
		~Form();
		std::string getName() const;
		bool getisSigned() const;
		int getgradeToSign() const;
		int getgradeToExectute() const;
		void beSigned(Bureaucrat& bureaucrat);
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

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
