/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:06:46 by aen-naas          #+#    #+#             */
/*   Updated: 2023/11/27 21:52:15 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	check_contact_value(std::string input, std::string msg)
{
	while (input.empty())
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	return input;
}

void	Contact::ft_fill_contact()
{
	std::string input = "";
	first_name = check_contact_value(input, "ENTER YOUR FIRST NAME: ");
	last_name = check_contact_value(input, "ENTER YOUR LAST NAME: ");
	nickname = check_contact_value(input, "ENTER YOUR NICKNAME: ");
	phone_number = check_contact_value(input, "ENTER YOUR PHONE_NUMBER: ");
	darkest_secret = check_contact_value(input, "ENTER YOUR DARKEST_SECRET: ");
}

std::string	Contact::display_value(int index)
{
	if (index == 0)
		return first_name;
	else if (index == 1)
		return last_name;
	else if (index == 2)
		return nickname;
	return NULL;
}
void	Contact::display_contact()
{
	std::cout << "first name: "<< first_name << std::endl;
	std::cout << "last name: "<< last_name << std::endl;
	std::cout << "nickname: "<< nickname << std::endl;
	std::cout << "phone: "<< phone_number << std::endl;
	std::cout << "darkest secret" << std::endl;
}
int	Contact::check_field()
{
	if (first_name.empty())
		return 0;
	return 1;
}