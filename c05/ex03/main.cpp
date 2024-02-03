/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:28:58 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/30 15:42:57 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main(void)
{
	try
	{
		AForm *test;
		Intern slave;
		Bureaucrat student("alae", 1);
		test = slave.makeForm("presidential pardon", "dd");
		student.signForm(*test);
		student.executeForm(*test);
		delete test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------------------" << std::endl;
	try
	{
		AForm *test;
		Intern slave;
		Bureaucrat student("mehrez", 1);
		test = slave.makeForm("presidential pardon", "test");
		student.signForm(*test);
		student.executeForm(*test);
		delete test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------------------" << std::endl;
	try
	{
		AForm *test;
		Intern slave;
		Bureaucrat student("blayli", 1);
		test = slave.makeForm("shrubbery creation", "test");
		student.signForm(*test);
		student.executeForm(*test);
		delete test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}