/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:21:54 by luca              #+#    #+#             */
/*   Updated: 2024/07/16 15:24:33 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("John", 5);

		bureaucrat.incrementGrade();
		bureaucrat.decrementGrade();
		// Proviamo a creare un form e firmarlo
		Form form("Tax Form", 5, 3);
		bureaucrat.signForm(form);
		Form form2("Napoli Form", 5, 3);
		// Proviamo a firmare il form con un grado troppo basso
		Bureaucrat bureaucrat2("Alice", 10);
		bureaucrat2.signForm(form2);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
