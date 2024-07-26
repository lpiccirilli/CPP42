/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:12:05 by luca              #+#    #+#             */
/*   Updated: 2024/07/25 18:06:20 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		AForm(std::string name, const int gradeToSign, const int gradeToExecute);
		virtual AForm &operator=(AForm const &form);
		AForm(const AForm &form);
		virtual ~AForm();
		std::string getName();
		bool getisSigned() const;
		int getgradeToSign();
		int getgradeToExectute();
		virtual void execute(Bureaucrat& bureaucrat) = 0;
		void beSigned(Bureaucrat& bureaucrat);
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif
