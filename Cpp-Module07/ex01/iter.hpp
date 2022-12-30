/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:43:40 by ataji             #+#    #+#             */
/*   Updated: 2022/12/30 12:03:55 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T> void print(T param){
    std::cout << param << std::endl;
}


template <typename T, typename IFT> void iter(T *Array, int lengthArray, IFT func){
    for(int i = 0; i < lengthArray; i++)
        func(Array[i]);
}

#endif
