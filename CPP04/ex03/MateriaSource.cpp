/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:02:05 by luca              #+#    #+#             */
/*   Updated: 2024/05/03 18:13:14 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->stored[i] = 0;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m == 0)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->stored[i] == 0)
			this->stored[i] = m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i > 4; i++)
	{
		if(type == this->stored[i]->getType())
			return this->stored[i]->clone();
	}
	return (0);
}
