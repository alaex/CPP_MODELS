/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:23:53 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/09 14:59:21 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

struct SArray {
    int size;
    int content;
};

int main()
{
    Array<int> arr0(2);
    // char const  ?str[5] = "dddd";

    arr0[0] = 12;
    arr0[1] = 10;
    const Array<int> arr(arr0);

    // str[1] = 'w';
    arr[0] = 91;
    // arr[1] = 91;
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    // std::cout << arr[2] << std::endl;
    // arr[2] = 886;
    // arr[1] = 886;
    // std::cout << arr[1] << std::endl;
    // std::cout << arr[2] << std::endl;

    // const Array<int> arr7(arr);
    // arr[2] = 555;

//     for (unsigned int i = 0; i < arr.size(); i++)
//         arr[i] = pow(i,2);
//     for (unsigned int i = 0; i < arr.size(); i++)
//         std::cout << arr[i] << std::endl;
//    try
//    {
//         Array<int> test(1);
//         test[-7] = 0;
//    }
//    catch(const std::exception& e)
//    {
//     std::cerr << e.what() << '\n';
//    }
   
//     const Array<int> arr_const(arr);
//     arr[0] = 88;
//     std::cout << arr_const[0] << '\n';
    
//     Array<SArray> complex(5);
//     complex[0].content = 5;
//     complex[0].size = 15;
//     std::cout << complex[0].content << '\n';
//     std::cout << complex[0].size << '\n';
}