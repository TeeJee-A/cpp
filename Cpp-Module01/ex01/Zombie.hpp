/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:39:49 by ataji             #+#    #+#             */
/*   Updated: 2022/12/10 14:47:08 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cctype>

class Zombie{
private:
    std::string Name;
public:
    void setName(std::string __name);
    std::string getName();
    void announce(void);
    Zombie();
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
