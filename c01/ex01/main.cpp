/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:42:52 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/20 14:41:13 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int count = 3;

	if (count < 0)
	{
		std::cout << "pass positive number" << '\n';
		return 1;
	}
	Zombie *zombie = zombieHorde(count,"alae");
	for (int  i = 0; i < count; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}