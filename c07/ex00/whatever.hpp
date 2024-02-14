/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:05:28 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/06 18:16:27 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

template <typename T>
T min(T a, T b){ if (a < b) {return a;}  return b;}
// ---------------------------------------------------- //
template <typename T>
T max(T a, T b){ if (a > b) {return a;}  return b;}
// ---------------------------------------------------- //
template <typename T>
void swap(T&a, T&b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}
#endif
