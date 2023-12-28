/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:24:32 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/28 15:10:58 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;
Fixed::Fixed() : fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float parameter)
{
	std::cout << "float constructor called" << std::endl;
    this->fixed =  roundf(parameter * (1 << this->fractional));
}

Fixed::Fixed(const int parameter)
{
	std::cout << "int constructor called" << std::endl;
    this->fixed = parameter << fractional;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;

}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed = other.fixed;
    return *this;
}

Fixed::~Fixed()
{
	std::cout << "destactor has been called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed);
}
void Fixed::setRawBits(const int bits)
{
	this->fixed = bits;
}

float Fixed::toFloat(void) const
{
	float result = this->fixed / (float)(1 << this->fractional);
	return (result);
}

int   Fixed::toInt(void) const
{
	int result = roundf(toFloat());
	return (result);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
