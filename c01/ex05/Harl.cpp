/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:19 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/13 15:36:32 by aen-naas         ###   ########.fr       */
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
	std::string levels[4] = {"debug", "info", "warning", "error"};
	size_t len = sizeof(levels) / sizeof(levels[0]);
	size_t i = 0;
	while (i < len)
	{
		if (levels[i] == level)
		{
			(this->*functionPointers[i])();
			break;
		}
		i++;
	}
}


