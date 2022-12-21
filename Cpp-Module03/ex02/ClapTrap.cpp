/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:32:28 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 18:19:18 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    Name = name;
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(){
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
    Name = "no-Name";
}

void ClapTrap::attack(const std::string& target){
    if (this->HitPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " died" << std::endl;
        return ;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " didn't have energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "Attention ClapTrap " << this->Name << " take " << amount;
    std::cout << " from her " << this->HitPoints << " HitsPoints" << std::endl;
    this->HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->HitPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " died" << std::endl;
        return ;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " didn't have energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " Repairs itself, it gets " << amount;
    std::cout << " hit points back to " << this->HitPoints << " HitsPoints" << std::endl;
    this->EnergyPoints--;
    this->HitPoints += amount;
}

ClapTrap::ClapTrap(const ClapTrap& ClapT){
    std::cout << "copy constructor called" << std::endl;
    *this = ClapT;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapT){
    std::cout << "copy assigment operator called" << std::endl;
    this->AttackDamage = ClapT.AttackDamage;
    this->EnergyPoints = ClapT.EnergyPoints;
    this->HitPoints = ClapT.HitPoints;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}