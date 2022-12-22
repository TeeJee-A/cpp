/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:16:41 by ataji             #+#    #+#             */
/*   Updated: 2022/12/22 09:07:58 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  // ClapTrap *claptrap = new ClapTrap("ayoub");
  ClapTrap claptrap("ayoub");
  ClapTrap c(claptrap);
  claptrap.attack("Enemy");
  claptrap.takeDamage(5);
  claptrap.beRepaired(3);
  c.attack("Enemy");
  c.takeDamage(10);
  c.beRepaired(5);

  return 0;
}
