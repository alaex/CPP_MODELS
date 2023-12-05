/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:11:26 by aen-naas          #+#    #+#             */
/*   Updated: 2023/11/27 22:33:57 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	my_get_line(std::string msg)
{
	std::string input = "";
	std::cout << msg << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	return input;
}

int main(void)
{
	std::string input;
	PhoneBook myContacts;
	while (1)
	{
		input = my_get_line("PLEASE ENTER ONE OF THE FOLLOWING OPTION :\nADD - SEARCH - EXIT:");
		if (input == "ADD")
			myContacts.add_contact();
		else if (input == "SEARCH")
			myContacts.display_contact_info();
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "ERROR: " << input  << " IS INVALID INPUT" << std::endl;
	}
}