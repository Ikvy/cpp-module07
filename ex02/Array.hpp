/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:16:04 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/22 15:34:17 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& cpy);
		Array& operator=(const Array& a);
		~Array();
		T& operator[](std::size_t index);
		std::size_t size() const;
		T* getArray() const;
		class OutOfBound : public std::exception{
				   public:
					   const char *what() const throw(){ return "Array index out of bound, exiting";};
		};

	private:
		std::size_t countSize;
		T	*array;
};
