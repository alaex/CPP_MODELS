/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:28:02 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 12:12:19 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat result("alae", 10);
		Form my_form("form", 30, 45);
		std::cout << my_form;
		result.signForm(my_form);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
}