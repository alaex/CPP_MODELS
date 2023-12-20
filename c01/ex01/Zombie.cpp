/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:31:14 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/19 20:57:27 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << '\n';
}

Zombie::Zombie()
{
	std::cout << "constructor has been called" << '\n';
}
Zombie::~Zombie(void)
{
	std::cout << "destructor has been called for " << name << '\n';
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}