/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:24:32 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/28 18:14:16 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : fixed(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float parameter)
{
    this->fixed = roundf(parameter * (1 << this->fractional));
}

Fixed::Fixed(const int parameter)
{
    this->fixed = parameter << fractional;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;

}
// overlading operators
Fixed Fixed::operator+(const Fixed& other) 
{
	Fixed res;
	res.fixed =  this->fixed + other.fixed;
	return res;
}

Fixed Fixed::operator-(const Fixed& other) 
{
	Fixed res;
	res.fixed =  this->fixed - other.fixed;
	return res;
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed res;
	res.fixed = roundf((other.getRawBits() * this->fixed) / (1 << this->fractional));
	return res;
}
Fixed Fixed::operator/(const Fixed& other)
{
	Fixed res;
	res.fixed = roundf((this->getRawBits() / other.fixed) * (1 << this->fractional));
	return res;
}


Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        this->fixed = other.fixed;
    return *this;
}

Fixed& Fixed::operator++()
{
	this->fixed++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixed++;
	return temp;
}
Fixed& Fixed::operator--()
{
	this->fixed--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixed--;
	return temp;
}

Fixed::~Fixed()
{
	// std::cout << "destactor hase been called" << std::endl;
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
	int result = this->fixed >> this->fractional;
	return (result);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}


// overloading functions
bool Fixed::operator<(const Fixed& obj) const
{
	return obj.toInt() < this->toInt();
}
bool Fixed::operator>(const Fixed& obj) const
{
	return obj.toInt() > this->toInt();
}
bool Fixed::operator>=(const Fixed& obj) const
{
	return obj.toInt() >= this->toInt();
}
bool Fixed::operator<=(const Fixed& obj) const
{
	return obj.toInt() <= this->toInt();
}
bool Fixed::operator==(const Fixed& obj) const
{
	return obj.toInt() == this->toInt();
}
bool Fixed::operator!=(const Fixed& obj) const
{
	return obj.toInt() != this->toInt();
}

Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return n1;
	return n2;
}
const Fixed& Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return n1;
	return n2;
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return n1;
	return n2;
}
const Fixed& Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return n1;
	return n2;
}