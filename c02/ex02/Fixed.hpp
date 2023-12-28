/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:03:09 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/28 16:02:32 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int         fixed;
        static const int   fractional = 8;
    public:
		// constructors
       		Fixed(const int parameter);
       		Fixed(const float parameter);
    		Fixed();
			Fixed(const Fixed& other);
		// overloading functions
    		Fixed& operator=(const Fixed& other);
			bool operator<(const Fixed& obj) const;
			bool operator>(const Fixed& obj) const;
			bool operator<=(const Fixed& obj) const;
			bool operator>=(const Fixed& obj) const;
			bool operator==(const Fixed& obj) const;
			bool operator!=(const Fixed& obj) const;

			//////
			Fixed& operator+(const Fixed& obj) ;
			Fixed& operator-(const Fixed& obj) ;
			Fixed& operator*(const Fixed& obj) ;
			Fixed& operator/(const Fixed& other) ;
			/////
			
			Fixed& operator++();
			Fixed  operator++(int);
			Fixed& operator--();
			Fixed  operator--(int);
		// get && seter
    		int getRawBits( void ) const;
			void setRawBits( int const raw );
		// member functions
			float toFloat(void) const;
    		int   toInt(void) const;
			static Fixed& min(Fixed &n1, Fixed &n2);
			static Fixed const&  min(Fixed const &n1, Fixed const &n2);
			static Fixed& max(Fixed &n1, Fixed &n2);
			static Fixed const& max(Fixed const &n1, Fixed const &n2);
		// destructor
       		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif