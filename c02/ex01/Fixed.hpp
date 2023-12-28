/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:03:09 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/28 15:10:15 by aen-naas         ###   ########.fr       */
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
        static const int   fractional;
    public:
        Fixed(const int parameter);
        Fixed(const float parameter);
    	Fixed();
		float toFloat(void) const;
    	Fixed(const Fixed& other);
    	Fixed& operator=(const Fixed& other);
    	int getRawBits( void ) const;
		void setRawBits( int const raw );
    	int   toInt(void) const;
       ~Fixed();
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif