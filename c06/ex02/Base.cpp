/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:37:03 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/05 18:14:30 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base *generate(void)
{
    std::srand((std::time(0)));
	int rand = std::rand();
    if (rand % 3 == 0)
        return new A();
    else if (rand % 3 == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A type"<< std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B type"<< std::endl;
	else if  (dynamic_cast<C*>(p))
		std::cout << "C type"<< std::endl;
	else
		std::cout << "none of the known types" << std::endl;
}

void identify(Base& p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A type"<< std::endl;
		(void)a;
	}
	catch (...)
	{
		std::cerr << "could not cast to A" << '\n';
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B type"<< std::endl;
			(void)b;
		}
		catch(...)
		{
			std::cerr << "could not cast to B" << '\n';
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "C type"<< std::endl;
				(void)c;
			}
			catch(...)
			{
				std::cerr << "could not cast to C" << '\n';
			}
		}
	}
}

int main()
{
	Base *test ;
	A *x = new A();
	test = dynamic_cast<Base*>(x);
	// identify(test);

	// identify(*test);
	return (0);
}