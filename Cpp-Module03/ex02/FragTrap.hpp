/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:26:59 by ataji             #+#    #+#             */
/*   Updated: 2022/12/21 21:32:25 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap(std::string name);
    FragTrap();
    FragTrap(const FragTrap& FragT);
    FragTrap& operator=(const FragTrap& FragT);
    void highFivesGuys();
    ~FragTrap();
};

#endif
