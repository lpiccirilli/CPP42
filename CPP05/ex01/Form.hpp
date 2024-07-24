/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:12:05 by luca              #+#    #+#             */
/*   Updated: 2024/07/15 18:59:13 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form(std::string name, const int gradeToSign, const int gradeToExecute);
		Form &operator=(Form const &form);
		Form(const Form &form);
		std::string getName();
		bool getisSigned() const;
		int getgradeToSign();
		int getgradeToExectute();
		void beSigned(Bureaucrat& bureaucrat);
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif
