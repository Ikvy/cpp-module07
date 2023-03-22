/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:09:51 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/21 14:59:55 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print(int c)
{
	std::cout << c << std::endl;
}

void int_test()
{
	std::cout << "int test" << std::endl;
	int tab[3] = {1, 2, 3};
	::iter(tab, 3, print);
	::iter(tab, 3, up<int>);
	std::cout << "\n\n";
	::iter(tab, 3, templatePrint<int>);
}

void char_test()
{
	std::cout << "\nchar test" << std::endl;
	char tab[3] = {'a', 'b', 'c'};
	::iter(tab, 3, templatePrint<char>);
	::iter(tab, 3, up<char>);
	std::cout << "\n\n";
	::iter(tab, 3, templatePrint<char>);
}

void string_test()
{
	std::cout << "\nstring test" << std::endl;
	std::string tab[3] = {"zoui", "znon", "djksha"};
	::iter(tab, 3, templatePrint<std::string>);
	::iter(tab, 3, strUp<std::string>);
	std::cout << "\n\n";
	::iter(tab, 3, templatePrint<std::string>);
}

void float_test()
{
	std::cout << "\nfloat test" << std::endl;
	float tab[3] = {1.8, 2.3, 3.42};
	::iter(tab, 3, templatePrint<float>);
	::iter(tab, 3, up<float>);
	std::cout << "\n\n";
	::iter(tab, 3, templatePrint<float>);
}


int main()
{
	int_test();
	char_test();
	string_test();
	float_test();
}
