/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:28:58 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 15:45:56 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{

	try{
		AForm *test;
		Intern slave;
		Bureaucrat student("alae", 3);

		test = slave.makeForm("ShrubberyCreation", "chaf");
		student.signForm(*test);
		student.executeForm(*test);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}