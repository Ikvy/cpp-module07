/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:03:57 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/21 14:39:49 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>

template<typename C>
void up(C &c)
{
	c++;
}

template<typename C>
void strUp(C &c)
{
	int i = -1;
	while (c[++i])
		c[i] = std::toupper(c[i]);
}

template<typename C>
void templatePrint(C &c)
{
	std::cout << c << std::endl;
}



template< typename F, class S>
void iter(S* str, size_t const len, F func)
{
	for (size_t i = 0; i != len; i++)
	{
		func(str[i]);
	}
}

