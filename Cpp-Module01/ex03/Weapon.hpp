/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:24:59 by ataji             #+#    #+#             */
/*   Updated: 2022/12/13 10:12:26 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <cctype>
#include <stdexcept>

class Weapon{
private:
    std::string type;
public:
    const std::string& getType();
    void setType(std::string newType);
    Weapon();
    Weapon(const Weapon& weapon);
    Weapon(std::string String);
    ~Weapon();
};

#endif
