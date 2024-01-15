/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:57:13 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 17:26:23 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap test;

    test.attack("you");
    test.guardGate();
    test.takeDamage(50);
    for (size_t i = 0; i < 49; i++)
    {
        test.beRepaired(1);
    }
    test.attack("you");
    
}