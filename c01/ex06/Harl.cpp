/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:46:36 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/20 21:51:22 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";
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
	int i = 0;
	while (i < 4 && level != this->levels[i])
		i++;
	switch (i)
	{
		default:
			std::cerr << "ERROR: Unknown levle" << std::endl;
			break;
		case 0:
			(this->*functionPointers[0])();
		case 1:
			(this->*functionPointers[1])();
		case 2:
			(this->*functionPointers[2])();
		case 3:
			(this->*functionPointers[3])();
	}
}