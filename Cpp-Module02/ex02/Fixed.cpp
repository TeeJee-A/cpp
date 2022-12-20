/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:48:38 by ataji             #+#    #+#             */
/*   Updated: 2022/12/19 19:16:44 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){ //default constructor
    fixed = 0;
}

Fixed::Fixed(const int Fix__){ //int parametrize constructor
    fixed = roundf(Fix__ * (1 << fractional));
}

Fixed::Fixed(const float Fix__){ //float parametrize constructor
    fixed = roundf(Fix__ * (1 << fractional));
}

Fixed::Fixed(const Fixed& Fix){ //copy constructor
    *this = Fix;
}

float Fixed::toFloat(void) const{ //member function
    float NewFloat;
    NewFloat = (float)(fixed / (float)(1 << fractional));
    return (NewFloat);
}

int Fixed::toInt(void) const{  //member function
    int NewInt;
    NewInt = (float)(fixed / (float)(1 << fractional));
    return (NewInt);
}

Fixed::~Fixed(){ //destructor
}
