/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:40:43 by luca              #+#    #+#             */
/*   Updated: 2024/07/05 23:50:17 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "ideona";
	std::cout << "brain constructor\n";
}

Brain::~Brain()
{
	std::cout << "brain destructor\n";
}

Brain& Brain::operator=(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << "brain copy constructor\n";
}

void Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return this->ideas[index];
}
