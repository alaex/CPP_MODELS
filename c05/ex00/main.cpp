/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:28:02 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 12:03:59 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat result("alae", 1);
		result.increment();
		std::cout << result;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 0;
	}
}