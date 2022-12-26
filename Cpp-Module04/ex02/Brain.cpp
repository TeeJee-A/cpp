/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:38:32 by ataji             #+#    #+#             */
/*   Updated: 2022/12/22 21:02:44 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain(){
    std::cout << "Brain constractor called" << std::endl;
}

Brain::Brain(const Brain& b){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = b;
}

Brain& Brain::operator=(const Brain& b){
    std::cout << "Brain copy assigment operator called" << std::endl;
    if (this != &b){
        for (int i = 0; i < 100; i++)
            ideas[i] = b.ideas[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}
