/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:35:27 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/19 21:00:30 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destruct for " << name <<'\n';
}
void Zombie::announce( void )
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}

