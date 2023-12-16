/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:17:24 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/16 15:10:14 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	PhoneBook::add_contact()
{
	static int index;

	if (index > 7)
		index = 0;
	book[index].ft_fill_contact();
	index++;
}

void	ft_draw_border(std::string str, int i)
{
	int len = str.length();
	if (len < 10)
		std::cout << std::setw(10) << str;
	else
		std::cout << std::setw(9) << str.substr(0, 9) << ".";
	if (i)
		std::cout << "|";
	else 
		std::cout << std::endl;
}

int	check_prompt_value(std::string prompt)
{
	if (prompt.empty())
		return 1;
	for (unsigned long i = 0; i < prompt.length(); i++)
	{
		if (prompt[i] && !isdigit(prompt[i]))
			return 1;
	}
	return 0;
}	

void	PhoneBook::display_contact_info()
{
	int 		i = 0;
	int 		index;
	std::string prompt = "";

	ft_draw_border("index", 1);
	ft_draw_border("fname", 1);
	ft_draw_border("lname", 1);
	ft_draw_border("nickname", 0);
	if (!book[0].check_field())
	{
		std::cout << "NO CONTACT HAS BEEN SAVED" << std::endl;
		return;
	}
	while (i < 8)
	{
		if (!book[i].check_field())
			break;
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		ft_draw_border(book[i].display_value(0), 1);
		ft_draw_border(book[i].display_value(1), 1);
		ft_draw_border(book[i].display_value(2), 0);
		i++;
	}
	prompt = my_get_line("PLEASE ENTER THE CONTACT INDEX");
	while (check_prompt_value(prompt))
		prompt = my_get_line("please enter number between 1-8: ");
	index = std::atoi(prompt.c_str());
	if (index > 8 || index < 1)
	{
		std::cout << "INDEX OUT OF REANGE" << std::endl;
		return ;
	}
	else if (!book[index -1].check_field())
	{
		std::cout << "EMPTY CONTACT" << std::endl;
		return ;
	}
	book[index -1].display_contact();
}
