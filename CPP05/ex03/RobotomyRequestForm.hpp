/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:54:56 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 17:38:57 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &r);
		RobotomyRequestForm(const RobotomyRequestForm &r);
		void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
};

#endif
