/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:31:08 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/31 17:54:58 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av)
{

    if (ac != 2)
    {
        std::cerr << "error: Invalid arguments" << std::endl;
        return 1;
    }
    std::string str(av[1]);
    ScalarConverter::convert(str);
}