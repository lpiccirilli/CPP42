/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:21:54 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 16:36:34 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
		PresidentialPardonForm(const PresidentialPardonForm &p);
		virtual ~PresidentialPardonForm();
		void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
};

#endif
