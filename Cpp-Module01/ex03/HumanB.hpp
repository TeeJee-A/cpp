/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:39:34 by ataji             #+#    #+#             */
/*   Updated: 2022/12/11 18:00:36 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <cctype>
#include "Weapon.hpp"

class HumanB{
private:
    std::string name;
    Weapon* club;
public:
    void setName(std::string __name);
    void setWeapon(Weapon& W);
    std::string getName();
    void attack();
    HumanB();
    HumanB(std::string Name);
    ~HumanB();
};

#endif
