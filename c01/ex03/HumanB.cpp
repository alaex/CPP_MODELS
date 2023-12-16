/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:09:41 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/11 15:13:23 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}
void HumanB::attack()
{
	if (weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << '\n';
	else
		std::cout << this->name << " attacks with their his hands" << '\n';
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB()
{
	std::cout << "distructr has been called for " << this->name << '\n';
}