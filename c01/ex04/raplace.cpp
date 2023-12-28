/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raplace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:24:23 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/21 12:55:18 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raplace.hpp"

void	Replace::ft_replace(std::string output, std::string s1, std::string s2, size_t pos)
{
	output.erase(pos, s1.length());
	output.insert(pos, s2);
	pos += s2.length();
	pos = output.find(s1, pos);
	if (pos != std::string::npos)
		ft_replace(output, s1, s2, pos);
	else
		this->replaced << output;
}



Replace::Replace(std::string file)
{
	this->orignal.open(file);

	if (!this->orignal.is_open())
	{
		std::cerr << "file has not been opened" << std::endl;
		exit(1);
	}
}

void	Replace::Sed(std::string file, std::string s1, std::string s2)
{
	char c;
	std::string output;
	size_t		pos;
	
	this->replaced.open(file + ".replace");
	while (this->orignal.get(c))
		output.push_back(c);
	pos = output.find(s1, 0);
	if (pos == std::string::npos)
		this->replaced << output << std::endl;
	else
		ft_replace(output, s1, s2 , pos);
}


Replace::~Replace()
{
	this->orignal.close();
	this->replaced.close();
	std::cout << "destactor: files has been closed" << std::endl;
}
