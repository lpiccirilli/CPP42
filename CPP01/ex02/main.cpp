/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:56:05 by luca              #+#    #+#             */
/*   Updated: 2024/04/19 16:06:35 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string address    = " << &str << std::endl;
	std::cout << "pointer address   = " << stringPTR << std::endl;
	std::cout << "reference address = " << &stringREF << std::endl;

	std::cout << "string value      = " << str << std::endl;
	std::cout << "pointer value     = " << *stringPTR << std::endl;
	std::cout << "reference value   = " << stringREF << std::endl;
}
