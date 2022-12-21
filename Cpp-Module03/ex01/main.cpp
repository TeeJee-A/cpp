/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:00 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 18:21:19 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap scavtrap("Hodor");
    scavtrap.attack("nightking");
    scavtrap.guardGate();
    scavtrap.takeDamage(6);
    scavtrap.beRepaired(6);
}
