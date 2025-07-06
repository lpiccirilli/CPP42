/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:37:18 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 18:41:13 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate()
{
	int i = std::rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
				std::cout << "C" << std::endl;
		}
	}
}

int main()
{
	std::srand(std::time(NULL));
	Base *prova = generate();
	identify(prova);
	identify(*prova);
	delete prova;
}
