/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:04:17 by ataji             #+#    #+#             */
/*   Updated: 2022/12/11 19:51:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::setName(std::string __name){
    name = __name;
}

void HumanB::setWeapon(Weapon& W){        
    club = &W;
}

std::string HumanB::getName(){
    return (name);
}

HumanB::HumanB(){
}

HumanB::HumanB(std::string Name){
    club = NULL;
    setName(Name);
}

HumanB::~HumanB(){
}

void HumanB::attack(){
    if (club == NULL){
        std::cout << "I need weapon" << std::endl;
    }else{
        std::cout << name << " attacks with their " << club->getType() << std::endl;
    }
}
