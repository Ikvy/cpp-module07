/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:20:49 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/22 16:06:29 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

void	basic_int_test()
{
	Array<int> classicUselessIntArray;
	std::cout << "empty array size : " << classicUselessIntArray.size() << std::endl;
	Array<int> zero(7);

	std::cout << "array is initialized with a size of " << zero.size() << " and filled with :" << std::endl;
	for(int i = 0; i < 7; i++)
		std::cout << zero[i] << std::endl;
}

void	deep_copy_test()
{
	std::cout << "\n\n\n DEEP COPY\n";
	Array<int> test;
	Array<int> test2(test);

	test = test2;
}

void	modif_test()
{
	Array<char> test(4);
}

int main()
{
	basic_int_test();
	system("leaks ex02");
	deep_copy_test();
	modif_test();
}
