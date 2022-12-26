/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:18:45 by ataji             #+#    #+#             */
/*   Updated: 2022/12/22 21:02:06 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.hpp"

class Brain{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& b);
    Brain& operator=(const Brain& b);
    ~Brain();
};

#endif
