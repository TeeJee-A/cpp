/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:41:33 by ataji             #+#    #+#             */
/*   Updated: 2022/12/13 20:58:41 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int N;
    Zombie* zom;
    std::string __Name;

    __Name = "TheWalkingDead";
    N = 20;
    zom = zombieHorde(N, __Name);
    while (N){
        zom->announce();
        N--;
    }
    delete[] zom;
}
