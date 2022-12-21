/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:49:30 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 21:41:37 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
private:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(const ClapTrap& ClapT);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap& operator=(const ClapTrap& ClapT);
    ~ClapTrap();
};

#endif
