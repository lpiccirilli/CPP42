/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:21:54 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 16:05:07 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("John", 5);
		std::cout << bureaucrat << std::endl;
		// Proviamo a creare un form e firmarlo
		Form form("Tax Form", 5, 3);
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << "after signing\n" << form << std::endl;
		Form form2("Tax2 Form", 5, 3);
		std::cout << form2 << std::endl;
		// Proviamo a firmare il form con un grado troppo basso
		Bureaucrat bureaucrat2("Alice", 7);
		bureaucrat2.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
