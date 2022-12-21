/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:32:28 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 21:36:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    Name = name;
    std::cout << "ClapTrap(name) : ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(){
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap() : ClapTrap default constructor called" << std::endl;
    Name = "no-Name";
}

void ClapTrap::attack(const std::string& target){
    std::cout << "Attack : ";
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
    std::cout << "takeDamage : ";
    std::cout << "Attention ClapTrap " << this->Name << " take " << amount;
    std::cout << " from her " << this->HitPoints << " HitsPoints" << std::endl;
    this->HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "beRepaired : ";
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
    std::cout << "ClapTrap(ClapT) : ClapTrap copy constructor called" << std::endl;
    *this = ClapT;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapT){
    std::cout << "ClapTrap copy assigment operator called" << std::endl;
    if (this != &ClapT){
        this->AttackDamage = ClapT.AttackDamage;
        this->EnergyPoints = ClapT.EnergyPoints;
        this->HitPoints = ClapT.HitPoints;
    }
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "~ClapTrap : ClapTrap destructor called" << std::endl;
}