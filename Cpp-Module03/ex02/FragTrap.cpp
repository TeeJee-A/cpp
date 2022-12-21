/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:31:17 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 21:34:49 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap(name) : FragTrap constructor called" << std::endl;
    Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(){
    std::cout << "FragTrap() : FragTrap Default constructor called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& FragT) : ClapTrap(FragT){
    std::cout << "FragTrap(FragT) : FragTrap copy constructor called" << std::endl;
    *this = FragT;
}

FragTrap& FragTrap::operator=(const FragTrap& FragT){
    std::cout << "FragTrap copy assigment operator called" << std::endl;
    if (this != &FragT){
        ClapTrap::operator=(FragT);
    }
    return (*this);
}

void FragTrap::highFivesGuys(){
    std::cout << "highFivesGuys : Good Game Guys High Fives" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "~FragTrap : FragTrap destructor called" << std::endl;
}
