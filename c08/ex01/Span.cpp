/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:07:22 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/29 12:56:56 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// canonical form
Span::Span(){}

Span::Span(const Span& copy)
{
    *this = copy;
}


Span& Span::operator=(const Span& copy)
{
    if (this != &copy)
    {
        this->N = copy.N;
        this->vec = copy.vec;
    }
    return *this;
}

Span::~Span(){}



Span::Span(unsigned int N)
{
    this->N = N;
}

// member functions

void Span::addNumber(int num)
{
    if (vec.size() == N)
        throw std::out_of_range("You did pass the range of the vector");
    vec.push_back(num);
    if (N > 1)
        std::sort(vec.begin(), vec.end());
}


void Span::addNumbers(int begin, int end)
{
    if (begin >= end)
        throw std::out_of_range("Pass valid arange");
    for (int i = begin; i < end; i++)
    {
        if (vec.size() == N)
            throw std::out_of_range("you passed the range of the vector");
        vec.push_back(i);
    }
    if (N > 1)
        std::sort(vec.begin(), vec.end());
    
}

int Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw std::out_of_range("not enough numbers");
    int size = vec.size() -1;

    int tmp;
    int shortestSpan = vec[1] - vec[0];

    for (int i = 1; i < size; i++)
    {
       tmp = vec[i + 1] - vec[i];
       if (tmp < shortestSpan)
            shortestSpan = tmp;
    }
    return shortestSpan;
}


int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw std::out_of_range("not enough numbers");
    int maxElement = *(--vec.end());
    int minElement = *vec.begin();

    return maxElement - minElement;
}