/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:10:25 by luca              #+#    #+#             */
/*   Updated: 2024/04/21 20:39:06 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source)
{
	std::cout << "Copy constructor operator called\n";
	setRawBits(source.getRawBits());
}
Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

void Fixed::	setRawBits(int raw)
{
	this->_fixed_value = raw;
}

int Fixed::getRawBits() const
{
	return (_fixed_value);
}

Fixed& Fixed::operator=(const Fixed& source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (*this != source)
		_fixed_value = source._fixed_value;
	return *this;
}

Fixed::Fixed(const int num)
{
	_fixed_value = num << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	_fixed_value = roundf(num *(1 << _bits));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return ((float)(_fixed_value) / (1 << _bits));
}

int Fixed::toInt() const
{
	return (_fixed_value >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed)
{
	os << Fixed.toFloat();
	return (os);
}

// operators

bool Fixed::operator>(const Fixed& source)
{
	if (this->_fixed_value > source._fixed_value)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& source)
{
	if (this->_fixed_value < source._fixed_value)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& source)
{
	if (this->_fixed_value >= source._fixed_value)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& source)
{
	if (this->_fixed_value <= source._fixed_value)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& source)
{
	if (this->_fixed_value == source._fixed_value)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& source)
{
	if (this->_fixed_value != source._fixed_value)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed& source)
{
	Fixed result;
	result._fixed_value = (this->_fixed_value + source._fixed_value);
	return result;
}

Fixed Fixed::operator-(const Fixed& source)
{
	Fixed result;
	result._fixed_value = (this->_fixed_value - source._fixed_value);
	return result;
}

Fixed Fixed::operator*(const Fixed& source)
{
	Fixed result;
	result.setRawBits(this->getRawBits() * source.getRawBits());
	result._fixed_value >>= result._bits;
	return result;
}
