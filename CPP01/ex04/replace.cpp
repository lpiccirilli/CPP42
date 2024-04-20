/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:03:36 by luca              #+#    #+#             */
/*   Updated: 2024/04/20 14:41:41 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replace(const char * filename, std::string s1, std::string s2)
{
	size_t index;
	std::ifstream file_input(filename);
	std::string buffer;

	if (!file_input.is_open())
	{
		std::cerr << "Error, file can't be opened" << std::endl;
		return ;
	}
	if (s1 == "" || s2 == "")
	{
		std::cerr << "strings can't be empty" << std::endl;
		return ;
	}
	std::string str(filename);
	std::ofstream replace_file((str + ".replace").c_str());
	if (!replace_file)
	{
		std::cerr << "Replace file can't be opened" << std::endl;
		return ;
	}
	while(std::getline(file_input, buffer))
	{
		index = 0;
		while((index = buffer.find(s1, index)) != std::string::npos)
		{
			buffer.erase(index, s1.length());
			buffer.insert(index, s2);
		}
		replace_file << buffer << std::endl;
	}
	file_input.close();
	replace_file.close();
}
