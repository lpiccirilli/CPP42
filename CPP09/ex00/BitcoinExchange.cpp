/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:06:47 by luca              #+#    #+#             */
/*   Updated: 2024/11/11 17:12:50 by luca             ###   ########.fr       */
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

float strToNum(std::string str)
{
	std::stringstream ss(str);
	float result;
	ss >> result;
	return result;
}

std::map<int, float> BitcoinExchange::convert_string(std::string str)
{
	std::map<int, float> input_data;
	std::string year = str.substr(0, str.find_first_of('-'));
	str = str.substr(str.find_first_of('-') + 1, str.length());
	std::string month = str.substr(0, str.find_first_of('-'));
	str = str.substr(str.find_first_of('-') + 1, str.length());
	std::string day = str.substr(0, str.find_first_of(' '));
	std::string data = year + month + day;
	int result = strToNum(data);
	std::string price = str.substr(str.find_first_of('|') + 2, str.length());
	float num = strToNum(price);
	if (num < 0 || num > 1000)
	{
		return input_data;
	}
	input_data[result] = num;
	return input_data;
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
	std::string line;
	std::getline(file, line);
	std::map<int, float> input_data;
	std::map<int, float>::iterator it;
	while(std::getline(file, line))
	{
		if (line.empty())
			continue;
		 std::map<int, float> temp_data = convert_string(line);
		input_data.insert(temp_data.begin(), temp_data.end());
	}
	for (std::map<int, float>::iterator it = input_data.begin(); it != input_data.end(); ++it)
	{
		std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
	}
}
