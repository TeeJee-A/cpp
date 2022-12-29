/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:57:17 by ataji             #+#    #+#             */
/*   Updated: 2022/12/29 16:24:36 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T> void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> T min(T a, T b){
    if (a < b)
        return a;
    return b;
}

template <typename T> T max(T a, T b){
    if (a > b)
        return a;
    return b;
}

#endif
