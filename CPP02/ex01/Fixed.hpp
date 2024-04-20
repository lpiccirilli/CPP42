/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:09:44 by luca              #+#    #+#             */
/*   Updated: 2024/04/20 17:04:29 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int _fixed_value;
		static const int bits = 8;
	public:
		Fixed(); //init to 0 _fixed_value
		Fixed(const Fixed& source);
		Fixed& operator=(const Fixed& source);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		//new functions and members
		Fixed(const int num);
		Fixed(const float num);
		float toFloat( void ) const;
		int toInt( void ) const;
};
