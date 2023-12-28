/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:19 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/20 21:57:44 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "debug" << '\n';
}
void Harl::info(void)
{
	std::cout << "info" << '\n';
}
void Harl::warning(void)
{
	std::cout << "warning" << '\n';
}
void Harl::error(void)
{
	std::cout << "error" << '\n';
}

void	Harl::complain(std::string level)
{
	void (Harl::* functionPointers[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*functionPointers[i])();
			exit(0);
		}
		i++;
	}
	std::cerr << "DEBUGING LEVEL DOSE NOT EXESTE " << std::endl;
}


