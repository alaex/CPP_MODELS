/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:40:58 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/04 15:53:37 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data *test = new Data();
    uintptr_t holder;
    test->value = 15;
    holder = Serializer::serialize(test);
    test = Serializer::deserialize(holder);
    std::cout << test->value << std::endl;
    delete test;
    return (0);
}