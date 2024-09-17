/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:22:21 by luca              #+#    #+#             */
/*   Updated: 2024/08/14 15:23:33 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	if (this != &other)
		*this = other;
}

void ScalarConverter::ConvertFloat(float f)
{
	if (isprint(static_cast<int>(f)) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::ConvertInt(int n)
{
	if (isprint(static_cast<int>(n)) == 0)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
		std::cout << "int: " << n << std::endl;
		std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void ScalarConverter::ConvertDouble(double d)
{
	if (isprint(static_cast<char>(d)) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::ConvertChar(char c)
{
	if (isprint(static_cast<int>(c)) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convert(const std::string &value)
{
	if (value.empty())
	{
		std::cout << "Empty input" << std::endl;
		return;
	}
	if (value == "nan" || value == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
	if (value == "inf" || value == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return;
	}
	if (value == "-inf" || value == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return;
	}
	char *endptr;
	if (value.length() > 1 && value[value.length() - 1] == 'f')
	{
		float f = std::strtof(value.substr(0, value.length() - 1).c_str(), &endptr);
		if (*endptr == '\0')
		{
			ConvertFloat(f);
			return ;
		}
	}
	long long int n = std::strtoll(value.c_str(), &endptr, 10);
	if (*endptr == '\0' && n >= std::numeric_limits<int>::min() && n <= std::numeric_limits<int>::max())
	{
		ConvertInt(n);
		return ;
	}
	double d = std::strtod(value.c_str(), &endptr);
	if (*endptr == '\0' && d > std::numeric_limits<int>::min() && d < std::numeric_limits<int>::max())
	{
		ConvertDouble(d);
		return ;
	}
	if (value.length() != 1)
	{
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	ConvertChar(value.at(0));
}
