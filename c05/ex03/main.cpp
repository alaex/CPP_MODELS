/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:28:58 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 17:35:48 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{

	try{
		// AForm *test;
		// Intern slave;
		Bureaucrat student("alae", 3);

		// test = slave.makeForm("ShrubberyCreation", "chaf");
		// student.signForm(*test);
		// student.executeForm(*test);
		PresidentialPardonForm test;
		PresidentialPardonForm test1;

		test.beSigned(student);

		test1 = test;

		std::cout << test.getSign();

	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}