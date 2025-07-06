/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:12:05 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:37:27 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
		AForm &operator=(AForm const &form);
		AForm(const AForm &form);
		virtual ~AForm();
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void execute(Bureaucrat const & bureaucrat)const  = 0;
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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
