/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:07:42 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/25 19:44:22 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int         fixed;
        const int   fractional;
    public:
       Fixed();
       Fixed(const Fixed& other);
       Fixed& operator=(const Fixed& other);
       ~Fixed();
       int getRawBits(void);
       void setRawBits(const int);
};

#endif