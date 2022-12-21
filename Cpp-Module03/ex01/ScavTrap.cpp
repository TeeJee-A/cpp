/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:18:42 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 21:51:14 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap& ScavTrap::operator= (const ScavTrap& ScavT){
    std::cout << "ScavTrap copy assigment operator called" << std::endl;
    if (this != &ScavT)
        ClapTrap::operator=(ScavT);
    return (*this);
}

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    Name = "no-Name";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap constructor called" << std::endl;
    Name = name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ScavT) : ClapTrap(ScavT){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = ScavT;
}

void ScavTrap::attack(const std::string& target){
    if (HitPoints <= 0){
        std::cout << "ScavTrap " << this->Name << " died" << std::endl;
        return ;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "ScavTrap " << this->Name << " didn't have energy" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->Name << " attacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}
