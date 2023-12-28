/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:21:44 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/20 21:49:12 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **av)
{
	Harl 		myHarl;
	std::string levle;

	if (argc != 2)
	{
		std::cerr << "YOUR ALLOWED TO PASS ONE DEBUGING LEVLE" << std::endl;
		return 1;
	}
	levle = av[1];
	myHarl.complain(levle);
}