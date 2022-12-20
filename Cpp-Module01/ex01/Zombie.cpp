/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:54:41 by ataji             #+#    #+#             */
/*   Updated: 2022/12/10 18:34:44 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string __name){
    Name = __name;
}

std::string Zombie::getName(){
    std::cout << Name << std::endl;
    return (Name);
}

void Zombie::announce(){
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << Name << ": youuuu diiiiie ..." << std::endl;
}
