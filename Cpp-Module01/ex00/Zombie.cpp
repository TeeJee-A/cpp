/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:28:20 by ataji             #+#    #+#             */
/*   Updated: 2022/12/13 20:51:41 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    Name = name;
}

Zombie::~Zombie(){
    std::cout << Name << ": youuuuu diiiiie...." << std::endl;
}

void Zombie::announce( void ){
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
