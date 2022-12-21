/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:48:38 by ataji             #+#    #+#             */
/*   Updated: 2022/12/20 11:32:07 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int Fix__){
    std::cout << "Int constructor called" << std::endl;
    fixed = roundf(Fix__ * (1 << fractional));
}

Fixed::Fixed(const float Fix__){
    std::cout << "Float constructor called" << std::endl;
    fixed = roundf(Fix__ * (1 << fractional));
}

Fixed::Fixed(const Fixed& Fix){
    std::cout << "Copy constructor called" << std::endl;
    *this = Fix;
}

Fixed& Fixed::operator = (const Fixed &Fix){
    std::cout << "Copy assigment operator called" << std::endl;
    this->fixed = Fix.fixed;
    return (*this);
}

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixed = 0;
}

float Fixed::toFloat(void) const{
    float NewFloat;
    NewFloat = (float)(fixed / (float)(1 << fractional));
    return (NewFloat);
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

int Fixed::toInt(void) const{
    int NewInt;
    NewInt = (fixed / (1 << fractional));
    return (NewInt);
}

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
}
