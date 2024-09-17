/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:06:47 by luca              #+#    #+#             */
/*   Updated: 2024/08/19 17:21:32 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	(void)other;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

int BitcoinExchange::convert_string(std::string str)
{
	std::string year = str.substr(0, 4);
	std::string month = str.substr(5, 2);
	std::string day = str.substr(8, 2);
	std::string data = year + month + day;
	std::stringstream ss(data);
	int result;
	ss >> result;
	std::cout << result << std::endl;
	return result;
}

void BitcoinExchange::get_input(char *file_name)
{
	std::ifstream file;

	file.open(file_name);
	if (!file.is_open())
	{
		std::cerr << "file not found" << std::endl;
		return;
	}
	std::map<int , double> input;
	std::string line;
	std::getline(file, line);
	std::map<int , double>::iterator it = input.begin();
	while(std::getline(file, line))
	{
		convert_string(line);
	}
}
