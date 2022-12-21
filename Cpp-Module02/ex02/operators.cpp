/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:53:53 by ataji             #+#    #+#             */
/*   Updated: 2022/12/20 11:20:53 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator= (const Fixed &Fix){
    if (this == &Fix)
        return (*this);
    this->fixed = Fix.fixed;
    return (*this);
}

Fixed Fixed::operator++ (){
    Fixed Fix;
    Fix.fixed = ++fixed;
    return (Fix);
}
Fixed Fixed::operator-- (){
    Fixed Fix;
    Fix.fixed = --fixed;
    return (Fix);
}

Fixed Fixed::operator++ (int){
    Fixed Fix;
    Fix.fixed = fixed++;
    return (Fix);
}

Fixed Fixed::operator-- (int){
    Fixed Fix;
    Fix.fixed = fixed--;
    return (Fix);
}

Fixed Fixed::operator+(const Fixed& Fix){
    *this = this->toFloat() + Fix.toFloat();
    return (*this);
}

Fixed Fixed::operator-(const Fixed& Fix){
    *this = this->toFloat() - Fix.toFloat();
    return (*this);
}

Fixed Fixed::operator*(const Fixed& Fix){
    *this = this->toFloat() * Fix.toFloat();
    return (*this);
}

Fixed Fixed::operator/ (const Fixed& Fix){
    *this = this->toFloat() / Fix.toFloat();
    return(*this);
}

bool Fixed::operator< (const Fixed& Fix){
    if (this->fixed < Fix.fixed)
        return (true);
    return (false);
}

bool Fixed::operator> (const Fixed& Fix){
    if (this->fixed > Fix.fixed)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& Fix){
    if (this->fixed == Fix.fixed)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& Fix){
    if (this->fixed != Fix.fixed)
        return (true);
    return (false);
}

bool Fixed::operator>= (const Fixed& Fix){
    if (this->fixed >= Fix.fixed)
        return (true);
    return (false);
}

bool Fixed::operator<= (const Fixed& Fix){
    if (this->fixed <= Fix.fixed)
        return (true);
    return (false);
}

Fixed& Fixed::min(Fixed& Fix1, Fixed& Fix2){
    if (Fix1 < Fix2)
        return (Fix1);
    else
        return (Fix2);
}

Fixed& Fixed::max(Fixed& Fix1, Fixed& Fix2){
    if (Fix1 > Fix2)
        return (Fix1);
    else
        return (Fix2);
}

const Fixed& Fixed::min(const Fixed& Fix1, const Fixed& Fix2){
    if ((Fixed)Fix1 < Fix2)
        return (Fix1);
    else
        return (Fix2);
}

const Fixed& Fixed::max(const Fixed& Fix1, const Fixed& Fix2){
    if ((Fixed)Fix1 > Fix2)
        return (Fix1);
    else
        return (Fix2);
}
