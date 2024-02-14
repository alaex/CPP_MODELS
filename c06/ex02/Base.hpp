/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:35:07 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/05 17:24:00 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base{
    public:
        virtual ~Base(){};
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
class A: public Base{};
class B: public Base{};
class C: public Base{};


#endif