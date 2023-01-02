/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:00 by ataji             #+#    #+#             */
/*   Updated: 2023/01/01 14:04:44 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap scavtrap("Hodor");
    ScavTrap a;
    ScavTrap b(scavtrap);
    a = scavtrap;
    scavtrap.attack("nightking");
    scavtrap.guardGate();
    scavtrap.takeDamage(6);
    scavtrap.beRepaired(6);
    // ClapTrap *c = new ScavTrap("ayoub");
    // c->attack("said");
    // delete c;
}
