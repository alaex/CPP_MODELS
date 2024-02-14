/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:29:54 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/05 17:34:56 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    display_cast(const std::string& str)
{
	std::cout << "char: " << str << std::endl;
	std::cout << "int: " << str << std::endl;
	std::cout << "flout: " << str << std::endl;
	std::cout << "double: " << str << std::endl;
}


void    to_char(int& c)
{
	if (c >= 32 & c <= 126)
		std::cout << "char: " << "'" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << "char: " << "imposible" << std::endl;
}


int    ft_input_one_character(std::string& str)
{
	std::cout << "char: " << "\'" << static_cast<char>(str[0]) << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<float>(str[0]) << ".0" << std::endl;
	return 0;
}
void	ft_cast(std::string& str)
{
	std::istringstream iss(str);
	double result;
	int int_Res;
	iss >> result;
	int_Res = static_cast<int>(result);
	to_char(int_Res);
	std::cout << "int: " << int_Res << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(result) << "f" << std::endl;
	std::cout << "double: "  << std::fixed << std::setprecision(1) << result << std::endl;
}

bool ft_check(std::string& str)
{
	bool decimalPointFound = false;

	if (str.length() == 1)
		ft_input_one_character(str);
	else
	{
		for (size_t i = 0; i < str.length(); ++i) 
		{
			char ch = str[i];

			if (i == 0 && (ch == '+' || ch == '-'))
				continue;
			if (ch == '.')
			{
				if (decimalPointFound)
					return true;
				decimalPointFound = true;
			}
			else if (!std::isdigit(ch) && ch != 'f')
				return true;
		}
		if (str[str.length() - 1] == 'f')
			str.erase(str.end() - 1);
		ft_cast(str);
	}
	return false;
}

void ScalarConverter::convert(std::string& str)
{
	int i = 0;
	std::string table[6] = {"-inf", "+inf", "-inff", "+inff" , "nan", "nanf"};
	while (i < 7)
	{
		if (table[i] == str)
			break ;
		i++;
	}
	if (i != 7) 
	{
		std::cout << str << std::endl;
		return;
	}
	if (ft_check(str))
	{
		display_cast("imposible");
		exit(0);
	}
}

int main(int ac, char **av)
{

	// if (ac != 2)
	// {
	// 	std::cerr << "error: Invalid arguments" << std::endl;
	// 	return 1;
	// }
	// std::string str(av[1]);
	// ScalarConverter::convert(str);
	// int intValue = 10;
	int x = 15;
	int *doubleValue = &x;
	
	char *str = reinterpret_cast<char *>(doubleValue);
}