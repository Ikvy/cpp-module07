/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:37:50 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/22 10:54:20 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array()
{
	this = new Array;
	this = NULL;
	this->countSize = 0;
	std::cout << "Array default constructor" << std::endl;
}

Array::Array(unsigned int n)
{
	this = new Array[n];
	for (int i = 0; i < n; i++)
		arary[i] = 0;
	this->countSize = T;
	std::cout << "Array sized constructor" << std::endl;
}

Array::Array(const Array& cpy)
{
	std::cout << "Array copy constructor" << std::endl;
	*this = cpy;
}

Array& operator=(const Array& a)
{
	*this = new Array(a);
	this->countSize = a.size();
	return (*this);
}

size_t Array::size()
{
	return (this->countSize);
}
