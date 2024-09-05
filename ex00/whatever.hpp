/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:03:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/03 12:40:55 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <typename T> void swap(T& x, T& y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T> T min(T x, T y)
{
    return (x < y) ? x : y;
}

template <typename T> T max(T x, T y)
{
    return (x <= y) ? y : x;
}



#endif