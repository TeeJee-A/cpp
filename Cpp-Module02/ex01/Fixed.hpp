/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:46:45 by ataji             #+#    #+#             */
/*   Updated: 2022/12/19 23:04:01 by ataji            ###   ########.fr       */
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
    ~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif

