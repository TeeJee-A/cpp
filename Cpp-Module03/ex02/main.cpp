/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:22:00 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 23:14:34 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    // FragTrap fragtrap;
    // FragTrap f(fragtrap);
    // FragTrap g;
    ClapTrap *c = new FragTrap("ayoub");
    c->attack("enemy");
    delete c;
    // g = fragtrap;
    // fragtrap.attack("nightking");
    // // fragtrap.guardGate();
    // fragtrap.takeDamage(6);
    // fragtrap.beRepaired(6);
    // fragtrap.highFivesGuys();
}
