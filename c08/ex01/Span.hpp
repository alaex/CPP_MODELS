/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:49:38 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/26 12:00:16 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <vector>


class Span {
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
    // canonical form
        Span(unsigned int N);
        Span();
        Span(const Span& copy);
        Span& operator=(const Span& obj);
        ~Span();
    // member functions
        void addNumber(int);
        int	shortestSpan();
		int longestSpan();
        void addNumbers(int, int);
};

#endif