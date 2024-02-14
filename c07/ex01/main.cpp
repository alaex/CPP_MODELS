/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:32:51 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/09 11:41:01 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


template< typename T >
void power_of_two( T& x )
{
  std::cout << pow(x,2)  << std::endl;
  return;
}

template< typename T >
void Capitalize( T& str )
{
  if (!str.empty()) {
      str[0] = std::toupper(str[0]);
    }
  std::cout << str << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  std::string tab1[] = {"alae", "eddine"};
  iter( tab, 5, power_of_two<int> );
  iter( tab1, 2, Capitalize<std::string> );

  return 0;
}
