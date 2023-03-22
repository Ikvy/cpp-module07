/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:16:04 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/22 10:55:42 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& cpy);
		Array& operator=(const Array& a);
		~Array();
		Array& operator[](int index);
		std::size_t size() const;

	private:
		std::size_t countSize;
};
