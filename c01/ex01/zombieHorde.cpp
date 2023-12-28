/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:36:42 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/21 19:10:06 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *array_zombie = new Zombie[N];
	if (array_zombie == nullptr)
		return array_zombie;
	for (int i = 0; i < N; i++)
	{
		array_zombie[i].setName(name);
	}
	return  (array_zombie);
}