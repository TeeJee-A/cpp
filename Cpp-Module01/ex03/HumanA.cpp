/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:09:46 by ataji             #+#    #+#             */
/*   Updated: 2022/12/11 18:02:10 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::setName(std::string __name){
    name = __name;
}

std::string HumanA::getName(){
    return (name);
}

HumanA::HumanA(std::string name, Weapon &W) : club(W){
    setName(name);
}

HumanA::~HumanA(){
}

void HumanA::attack(){
    std::cout << name << " attacks with their ";
    std::cout << club.getType() << std::endl;
}
