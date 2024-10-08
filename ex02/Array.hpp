/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:56:37 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/17 15:02:43 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <cstdlib>

template<typename T> class Array
{   
    private:

        T* _ptr;
        int _size;
    
    public:
 
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &array);
        ~Array();

        int& operator[](int);
        T* getptr();
        T* size() const;
};

#include "Array.tpp"

#endif