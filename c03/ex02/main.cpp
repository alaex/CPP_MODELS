/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:43:09 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 17:25:04 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("test");

    frag.attack("me");
    frag.highFivesGuys();
    frag.takeDamage(5);
}