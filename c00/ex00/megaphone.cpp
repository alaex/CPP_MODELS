/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:46:35 by aen-naas          #+#    #+#             */
/*   Updated: 2023/11/28 00:00:37 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int			i; 
	std::string	myString = "";

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			for (size_t x = 0; x < strlen(av[i]); x++)
				myString += toupper(av[i][x]);
			std::cout << myString;
			myString = "";
			i++;
		}
		std::cout << std::endl;
	}
}