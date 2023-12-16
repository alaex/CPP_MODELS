/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raplace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:24:23 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/13 14:02:39 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raplace.hpp"

void	Replace::ft_replace(std::string output, std::string s1, std::string s2)
{
	size_t		len;
	size_t		i;
	size_t		pos;
	size_t		pass;
	std::string replaced;

	len = s1.length();
	i = 0;
	pass = 0;
	pos = 0;
	while (output[i])
	{
		pos = output.find(s1, pos);
		if (pos != std::string::npos && pos == i)
		{
			for (size_t j = 0; j < s2.length(); j++)
				replaced.push_back(s2[j]);
			i += len - 1;
			pos += len;
		}
		else
			replaced.push_back(output[i]);
		i++;
	}
	this->replaced << replaced << '\n';
	replaced.clear();
}

Replace::Replace(std::string orignal, std::string s1, std::string s2)
{
	std::string output;
	size_t		pos;
	this->orignal.open(orignal);
	this->replaced.open("replaced");

	if (!this->orignal.is_open())
		std::cout << "file has not been opened" << std::endl;
	while (getline(this->orignal, output))
	{
		pos = output.find(s1);
		if (pos != std::string::npos)
		{
			ft_replace(output, s1, s2);
		}
		else
			this->replaced << output << '\n';
	}
}

Replace::~Replace()
{
	this->orignal.close();
	this->replaced.close();
	std::cout << "files has been closed" << std::endl;
}
