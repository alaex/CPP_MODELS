/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raplace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:25:29 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/21 12:55:08 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

class Replace
{
	private:
		std::ifstream orignal;
		std::ofstream replaced;
	public:
		Replace(std::string file);
		void	ft_replace(std::string output, std::string s1, std::string s2, size_t pos);
		void	Sed(std::string file, std::string s1, std::string s2);
		~Replace();
};

#endif