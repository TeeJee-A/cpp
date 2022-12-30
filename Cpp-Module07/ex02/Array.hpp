/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:15:41 by ataji             #+#    #+#             */
/*   Updated: 2022/12/30 22:52:21 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T> class Array{
private:
    unsigned int arraySize;
    T *array;
public:

    Array() : arraySize(0), array(NULL){
        // std::cout << "default constructor called" << std::endl;
    }

    Array(unsigned int n){
        // std::cout << "parametrized constructor called" << std::endl;
        arraySize = n;
        array = new T[arraySize];
    }
    
    Array(const Array& other){
        // std::cout << "copy constructor called" << std::endl;
        arraySize = other.arraySize;
        array = new T[arraySize];
        memset(array, 0, arraySize);
        for(unsigned int i = 0; i < arraySize; i++){
            array[i] = other.array[i];
        }
    }

    Array& operator=(const Array& other){
        // std::cout << "copy assignment operator called" << std::endl;
        arraySize = other.arraySize;
        if (this != &other){
            array = new T[arraySize];
            for (unsigned int i = 0; i < arraySize; i++){
                array[i] = other.array[i];
            }
        }
        return *this;
    }

    class OutOfBound : public std::exception {
    public:
        const char* what() const throw(){
            return "Array index out of bound, exiting";
        }
    };
    
    T& operator[](unsigned int index){
        if (index >= arraySize)
            throw OutOfBound();
        return array[index];
    }
    
    unsigned int size() const{
        return arraySize;
    }

    ~Array(){
        // std::cout << "destructor called" << std::endl;
        if (array)
            delete[] array;
    }
};

#endif
