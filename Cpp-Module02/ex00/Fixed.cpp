/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:19:15 by ataji             #+#    #+#             */
/*   Updated: 2022/12/19 22:50:04 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixed = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& Fix){
    std::cout << "Copy constructor called" << std::endl;
    *this = Fix;
}

Fixed& Fixed::operator = (const Fixed &Fix){
    std::cout << "Copy assigment operator called" << std::endl;
    this->fixed = Fix.getRawBits();
    this->fixed = Fix.fixed;
    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits number function called" << std::endl;
    return (fixed);
}

void Fixed::setRawBits(int const Raw){
    fixed = Raw;
}
