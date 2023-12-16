/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:21:44 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/15 12:37:28 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **av)
{
	Harl myHarl;
	int i = 0;

	if (argc != 2)
		return 1;
	while (i < 4)
	{
		if (myHarl.levels[i] == av[1])
			break;
		i++;
	}
	if (i == 5)
		return 1;
	switch (i)
	{
		case 0:
			myHarl.complain(myHarl.levels[0]);
		case 1:
			myHarl.complain(myHarl.levels[1]);
		case 2:
			myHarl.complain(myHarl.levels[2]);
		case 3:
			myHarl.complain(myHarl.levels[3]);
	}
}