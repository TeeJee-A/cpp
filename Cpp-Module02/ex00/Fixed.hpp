/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:55:14 by ataji             #+#    #+#             */
/*   Updated: 2022/12/19 22:13:20 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
private:
    int fixed;
    static const int fractional = 8;
public:
    int getRawBits(void) const;
    void setRawBits(int const Raw);
    Fixed();
    Fixed(const Fixed& Fix);
    Fixed& operator = (const Fixed &Fix);
    ~Fixed();
};

#endif
