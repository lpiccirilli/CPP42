/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:52:15 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 16:41:13 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		virtual ~ShrubberyCreationForm();
		void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
};

#endif
