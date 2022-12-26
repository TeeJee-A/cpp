/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:18:45 by ataji             #+#    #+#             */
/*   Updated: 2022/12/24 14:16:58 by ataji            ###   ########.fr       */
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
    void setIdeas(int i, std::string ideas);
    ~Brain();
};

#endif
