/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:33:22 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 17:23:36 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


AForm* Intern::makeForm(std::string name, std::string target)
{	
	int i = 0;
	AForm *result;
	std::string type[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (i = 0; i < 3; i++)
	{
		if (type[i] == name)
			break ;
	}
	switch (i)
	{
		case 0:
		{
			return new PresidentialPardonForm(target);
			break;
		}
		case 1:
		{
			result = new RobotomyRequestForm(target);
			break;
		}
		case 2:
		{
			result = new ShrubberyCreationForm(target);
			break;
		}
		default:
		{
			throw Intern::Search();
		}
	}
	if (result)
		std::cout << "Intern creates" << type[i] << std::endl; 
	return result;
}


const char  *Intern::Search::what() const throw()
{
	return "could not find the form";
}