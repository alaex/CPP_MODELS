/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:25:25 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/20 15:15:57 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "str address: " << &str << '\n';
	std::cout << "stringPTR address: " << stringPTR << '\n';
	std::cout << "stringREF address: " << &stringREF << '\n';
	std::cout << "str value: " << str << '\n';
	std::cout << "stringPTR value: " << *stringPTR << '\n';
	std::cout << "stringREF value: " << stringREF << '\n';

	return 0;
}