/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:20:49 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/24 10:26:21 by mmidon           ###   ########.fr       */
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
	std::cout << "\n\n\n MODIF TEST\n";
	Array<char> test(4);

	std::cout << "test content : \n";
	for(int i = 0; i < 4; i++)
		std::cout << test[i] << "$" << std::endl;
	test[2] = 'a';
	std::cout << "test content after modif: \n";
	for(int i = 0; i < 4; i++)
		std::cout << test[i] << "$"  << std::endl;

	Array<char> testcpy(test);
	std::cout << "test copy content : \n";
	for(int i = 0; i < 4; i++)
		std::cout << testcpy[i] << "$"  << std::endl;
	testcpy[0] = 'b';
	std::cout << "test copy content after modif : \n";
	for(int i = 0; i < 4; i++)
		std::cout << testcpy[i] << "$"  << std::endl;
	std::cout << "test content after copy modif : \n";
	for(int i = 0; i < 4; i++)
		std::cout << test[i] << "$"  << std::endl;
}

void	error_test()
{
	std::cout << "\n\n\nERROR TEST\n";
	Array<float> oskour;
	std::cout << "array size : " << oskour.size() << std::endl;
	oskour[3] = 0.2;
}

int main()
{
	basic_int_test();
	deep_copy_test();
	modif_test();
	try
	{
		error_test();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
//	system("leaks ex02");
}
