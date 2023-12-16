/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:53:40 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/10 21:30:16 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const std::string& Weapon::getType()
{
	std::string& ref_type = this->type;
	return ref_type;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}