/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:05:43 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/17 14:58:55 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>Array<T>::Array() : _size(0)
{
    _ptr = new T[0];
    std::cout << "Constructor Called" << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n) : _size(n)
{
    _ptr = new T[n];
    std::cout << "Array created with " << _size << " numbers!" << std::endl;
}

template <typename T>Array<T>::Array(const Array<T> &copy)
{
    _ptr = copy._ptr;
    _size = copy._size;
    std::cout << "Copy Array created with " << _size << " numbers!" << std::endl;
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &array)
{
    std::cout << "Copy operator called" << std::endl;
    if(*this != array)
    {
        _ptr = array._ptr;
        _size = array._size;
    }
    return *this;
}

template <typename T> Array<T>::~Array()
{
    std::cout << "Destructor Called" << std::endl;
}

template <typename T> int &Array<T>::operator[](int index)
{
    if (index >= _size || index < 0)
    {
        std::cout << "index: " << index << std::endl;
        std::cout << "size: " << _size << std::endl;
        std::cerr << "Array index out of bound, existing" << std::endl;
        return _ptr[0];
    }
    else 
        return _ptr[index];
}

template <typename T> T* Array<T>::getptr()
{
    return (_ptr);
}

template <typename T> T* Array<T>::size()
{
    return _size;
}
