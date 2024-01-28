/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:28:58 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 15:35:52 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{

	try{
		PresidentialPardonForm test;
		RobotomyRequestForm test1;
		ShrubberyCreationForm test2;
		Bureaucrat hh("me", 10);
		test1.beSigned(hh);
		std::cout << test2;
		// test2.virtual_execute(hh);
		// hh.executeForm(test2);
		hh.executeForm(test1);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}