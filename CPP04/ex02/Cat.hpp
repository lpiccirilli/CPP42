/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 23:22:52 by luca              #+#    #+#             */
/*   Updated: 2024/07/06 00:09:27 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);
		Cat& operator=(const Cat &cat);
		void makeSound() const ;
	private:
		Brain *brain;
};

#endif
