/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:53:17 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/03 13:27:50 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap obj("alae");

    obj.attack("you");
    for (size_t i = 0; i < 15; i++)
    {
        obj.beRepaired(1);
    }
    obj.attack("you");
    obj.takeDamage(5);
    obj.takeDamage(5);
    obj.takeDamage(5);
}