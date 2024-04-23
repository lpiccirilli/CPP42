/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:09:44 by luca              #+#    #+#             */
/*   Updated: 2024/04/21 18:49:54 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int _fixed_value;
		static const int _bits = 8;
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
		// new operators
		bool operator>(const Fixed& source);
		bool operator<(const Fixed& source);
		bool operator>=(const Fixed& source);
		bool operator<=(const Fixed& source);
		bool operator==(const Fixed& source);
		bool operator!=(const Fixed& source);

		Fixed operator+(const Fixed& source);
		Fixed operator-(const Fixed& source);
		Fixed operator+=(const Fixed& source);
		Fixed operator-=(const Fixed& source);
		Fixed operator*(const Fixed &source);
		Fixed operator/(const Fixed &source);

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

};

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed);



