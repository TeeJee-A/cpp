/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:36:19 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 17:53:50 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap& ScavT);
    ScavTrap& operator= (const ScavTrap& ScavT);
    void guardGate();
    void attack(const std::string& target);
};

#endif
