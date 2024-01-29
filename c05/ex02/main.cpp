/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:28:58 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/29 18:33:26 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{

	try{
		RobotomyRequestForm test1;
		ShrubberyCreationForm test2;
		Bureaucrat hh("me", 1);
		test1.beSigned(hh);
		hh.executeForm(test1);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;
	try{
		PresidentialPardonForm test;
		Bureaucrat hh("me", 1);
		test.beSigned(hh);


		hh.executeForm(test);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------------------" << std::endl;

	
	try{
		ShrubberyCreationForm test2;
		Bureaucrat hh("me", 1);
		test2.beSigned(hh);

		hh.executeForm(test2);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}