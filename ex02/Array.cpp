/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:37:50 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/22 16:07:03 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	this->array = new T;
	this->array = nullptr;
	this->countSize = 0;
	std::cout << "Array default constructor" << std::endl;
}

template<typename T>
Array<T>::~Array()
{
	delete this->array;
	std::cout << "Array destructor" << std::endl;
}

template<typename T>
Array<T>::Array(const Array<T>& cpy)
{
	std::cout << "Array copy constructor" << std::endl;
	this->array = new T(cpy.size());
	this->countSize = cpy.size();
	for (size_t i = 0; i < this->countSize; i++)
		this->array[i] = cpy.getArray()[i];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	for (unsigned int  i = 0; i < n; i++)
		array[i] = 0;
	this->countSize = n;
	std::cout << "Array sized constructor" << std::endl;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& cpy)
{
	if (this->array)
		delete this->array;
	this->array = new T(cpy.size());
	this->countSize = cpy.size();
	for (size_t i = 0; i < this->countSize; i++)
		this->array[i] = cpy.getArray()[i];
	return (*this);
}

template<typename T>
T&	Array<T>::operator[](std::size_t index)
{
	if (index >= this->size())
		throw(Array<T>::OutOfBound());
	return this->array[index];
}

template<typename T>
size_t Array<T>::size() const
{
	return (this->countSize);
}

template<typename T>
T* Array<T>::getArray() const
{
	return (this->array);
}
