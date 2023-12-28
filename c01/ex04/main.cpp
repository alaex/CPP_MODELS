/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:32:37 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/21 12:55:05 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raplace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "please provide as with just a file and two strings" << '\n';
		return 1;
	}
	std::string file;
	std::string orignal;
	std::string replaced;

	file = av[1];
	orignal = av[2];
	replaced = av[3];

	if (orignal.empty())
	{
		std::cerr << "please provide as with a valid string" << '\n';
		return 1;
	}
	Replace replace(file);
	replace.Sed(file, orignal, replaced);
}