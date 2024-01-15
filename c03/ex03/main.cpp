/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:16:18 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 16:28:26 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(){
    DiamondTrap trap("me");
    trap.attack("sam");
    trap.whoAmI();
    trap.highFivesGuys();
    trap.guardGate();
}