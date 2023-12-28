/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:07:31 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/25 19:44:32 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) , fractional(8)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other): fixed(other.fixed) , fractional(0) 
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
	{
		// this->fractional = other.fractional;
		std::cout << "Copy assignment operator called" << std::endl;
		std::cout << this->fractional << std::endl;
        this->fixed = other.fixed;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destactor hase been called" << std::endl;
}


int Fixed::getRawBits(void)
{
	return (this->fixed);
}
void Fixed::setRawBits(const int bits)
{
	this->fixed = bits;
}