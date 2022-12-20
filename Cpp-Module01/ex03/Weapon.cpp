/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:34:14 by ataji             #+#    #+#             */
/*   Updated: 2022/12/11 20:02:39 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string String){
    type = String;
}

Weapon::~Weapon(){
}

void Weapon::setType(std::string newType){
    type = newType;
}

const std::string& Weapon::getType(){
    return (type);
}
