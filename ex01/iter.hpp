/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:41:32 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/03 15:45:41 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T, typename F> void iter(T array[], int length, F func)
{
    for (int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

#endif