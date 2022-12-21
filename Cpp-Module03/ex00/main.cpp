/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:16:41 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 21:44:16 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  ClapTrap claptrap("ayoub");
  claptrap.attack("Enemy");
  claptrap.takeDamage(5);
  claptrap.beRepaired(3);
  claptrap.attack("Enemy");
  claptrap.takeDamage(10);
  claptrap.beRepaired(5);

  return 0;
}
