/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:04:20 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/09 14:59:41 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <stdexcept>
#include <typeinfo>

template <typename T> class Array 
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int);
        Array(const Array&);
        Array &operator=(const Array&);
        T &operator[](unsigned int idx) const;
        // T const &operator[](unsigned int idx) const;
        unsigned int size() const;
        ~Array();
};



template <typename T>
Array<T>::Array()
{
    this->n = 0;
    this->arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->n = n;
    this->arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other)
{
    n = other.size();
    this->arr = new T[n];
    for (unsigned int i = 0; i < n; i++)
        this->arr[i] = other.arr[i];
}

template <typename T>
Array<T>::~Array()
{
    delete []arr;
}


template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        unsigned int n = other.size();
        delete[] this->arr;
        this->arr = new T[n];
        for (unsigned int i = 0; i < n; i++)
           this->arr[i] = other.arr[i];
    }
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const {
    return this->n;
}

template <typename T>
T& Array<T>::operator[](unsigned int idx) const
{
    // std::cout << "index"<< idx << std::endl;
    if (this->n <= idx)
        throw std::out_of_range("Array index out of range");
    return this->arr[idx];
}

// template <typename T>
// T const & Array<T>::operator[](unsigned int idx) const
// {
//     if (this->n <= idx)
//         throw std::out_of_range("Array index out of range");
//     return this->arr[idx];
// }


#endif
