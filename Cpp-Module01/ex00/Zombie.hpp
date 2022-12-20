/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:28:29 by ataji             #+#    #+#             */
/*   Updated: 2022/12/13 20:51:32 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cctype>
#include <string>

class Zombie {
private:
    std::string Name;
public:
    void announce( void );
    Zombie(std::string name);
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif