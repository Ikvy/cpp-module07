/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:55:10 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/20 15:09:15 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T> T max(T x, T y)
{
	return (x > y) ? x : y;
}

template<typename T> T min(T x, T y)
{
	return (x < y) ? x : y;
}

template<typename T> void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

