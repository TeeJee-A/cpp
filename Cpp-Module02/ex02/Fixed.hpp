/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:46:45 by ataji             #+#    #+#             */
/*   Updated: 2022/12/20 11:20:37 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed{
private:
    int fixed;
    static const int fractional = 8;
public:
    float toFloat(void) const;
    int toInt(void) const;
    Fixed(const int Fix__);
    Fixed();
    Fixed(const float Fix__);
    Fixed(const Fixed& Fix);
    Fixed& operator = (const Fixed &Fix);
    bool operator == (const Fixed& Fix);
    bool operator != (const Fixed& Fix);
    bool operator < (const Fixed& Fix);
    bool operator > (const Fixed& Fix);
    bool operator >= (const Fixed& Fix);
    bool operator <= (const Fixed& Fix);
    Fixed operator ++();
    Fixed operator ++(int);
    Fixed operator --(int);
    Fixed operator --();
    Fixed operator+ (const Fixed& Fix);
    Fixed operator- (const Fixed& Fix);
    Fixed operator * (const Fixed& Fix);
    Fixed operator / (const Fixed& Fix);
    static Fixed& min(Fixed& Fix1, Fixed& Fix2);
    static Fixed& max(Fixed& Fix1, Fixed& Fix2);
    static const Fixed& min(const Fixed& Fix1, const Fixed& Fix2);
    static const Fixed& max(const Fixed& Fix1, const Fixed& Fix2);
    ~Fixed();
};
    
std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif
