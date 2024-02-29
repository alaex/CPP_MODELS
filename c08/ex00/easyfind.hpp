/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:33:08 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/27 13:05:56 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>


template <typename T>
void easyfind(T& container, int it)
{
    if (std::find(container.begin(), container.end(), it) != container.end())
        std::cout << "found " << it << std::endl;
    else
        throw std::out_of_range("Element not found in container");
}
#endif

