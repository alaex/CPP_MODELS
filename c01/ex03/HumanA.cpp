/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:05:51 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/11 15:11:56 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string human_name ,Weapon& weapon_type) : ply_weapon(weapon_type)
{
	this->name = human_name;
}
void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << ply_weapon.getType() << '\n';
}
HumanA::~HumanA()
{
	std::cout << "distructr has been called for " << this->name << '\n';
}