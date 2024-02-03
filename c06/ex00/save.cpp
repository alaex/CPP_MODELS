/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:29:54 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/03 16:45:48 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    display_cast(std::string& str)
{
    std::cout << "char: " << str << std::endl;
    std::cout << "int: " << str << std::endl;
    std::cout << "flout: " << str << std::endl;
    std::cout << "double: " << str << std::endl;
}

void    ft_cast_flout(std::istringstream& str)
{
    float c;
	str >> c;
	if (!str.fail())
		std::cout << "float: " << c << std::endl;
	else
		std::cout << "float: " << "imposible" << std::endl;
}
void    ft_cast_double(std::istringstream& str)
{
    double c;
	str >> c;
	if (!str.fail())
		std::cout << "double: " << c << std::endl;
	else
		std::cout << "double: " << "imposible" << std::endl;
}

void    ft_cast_int(std::istringstream& str)
{
	int c;
	str >> c;
	if (str.fail())
		std::cout << "int: " << c << std::endl;
	else
		std::cout << "int: " << "imposible" << std::endl;
}

void    to_char(std::istringstream& iss)
{
    int c;

    iss >> c;
    std::cout << "char: " << (c) << std::endl;
	if (c >= 32 & c <= 126)
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: " << "imposible" << std::endl;
}


int    ft_input_one_character(std::string& str)
{
    std::istringstream iss(str);
    to_char(iss);
    // to_int(&iss);
    // to_double(&iss);
    // to_float(&iss);
    return 0;
}
void	ft_cast(std::string& str)
{
	std::istringstream iss(str);
    double result;;
    iss >> result ;
    std::cout << "char: " << static_cast<char>(result) << std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "float: " << static_cast<float>(result) << std::endl;
    std::cout << "double: " << (result) << std::endl;
}

int ft_check(std::string& str)
{
    std::string s = "imposible";
    int len;
    if (str.length() > 1 && isalpha(str[0]))
        display_cast(s);
    else if (str.length() == 1)
    {
        return ft_input_one_character(str);
    }
    len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[0] == '-' || str[i] == '+')
            i++;
        if (isalpha(str[i]) && str[i] != 'f')
            return 1;
    }
    if (str[str.length() - 1] == 'f')
        str.erase(str.end() - 1);
    ft_cast(str);
    return 0;
}

void ScalarConverter::convert(std::string& str)
{
    if (str == "-inf" || str == "+inf" || str == "nan") 
    {
        std::cout << str << std::endl;
        return;
    }
    if (ft_check(str))
    {
        exit(0);
    }
    // long long n = static_cast<long long>(str);
    // std::cout << n << std::endl;
}