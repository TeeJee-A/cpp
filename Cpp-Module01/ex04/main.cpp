/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:22:35 by ataji             #+#    #+#             */
/*   Updated: 2022/12/12 19:36:18 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av){
    std::string S1 = av[2];
    std::string S2 = av[3];
    std::string Fl = av[1];
    if (ac != 4)
        std::cout << "enter four arguments" << std::endl;
    else
        ReadFromFile(Fl, S1, S2);
}
