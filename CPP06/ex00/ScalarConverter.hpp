/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:36:54 by luca              #+#    #+#             */
/*   Updated: 2024/08/14 15:23:03 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <limits>
#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
	public:
		static void convert(const std::string  &value);
		static void ConvertFloat(float f);
		static void ConvertInt(int n);
		static void ConvertDouble(double d);
		static void ConvertChar(char c);
};

#endif
