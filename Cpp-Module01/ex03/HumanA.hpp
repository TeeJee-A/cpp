/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:07:35 by ataji             #+#    #+#             */
/*   Updated: 2022/12/11 17:43:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanA{
private:
    std::string name;
    std::string W;
    Weapon& club;
public:
    void setName(std::string __name);
    std::string getName();
    void attack();
    HumanA(std::string name, Weapon &W);
    ~HumanA();
};

#endif
