/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:46:36 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/14 18:49:31 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->levels[0] = "debug";
    this->levels[1] = "info";
    this->levels[2] = "warning";
    this->levels[3] = "error";
}

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
	size_t len = sizeof(this->levels) / sizeof(this->levels[0]);
	size_t i = 0;
	while (i < len)
	{
		if (this->levels[i] == level)
		{
			(this->*functionPointers[i])();
			break;
		}
		i++;
	}
}