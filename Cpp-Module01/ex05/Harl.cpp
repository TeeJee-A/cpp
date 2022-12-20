/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:51:05 by ataji             #+#    #+#             */
/*   Updated: 2022/12/16 11:05:00 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fptr[])(void) = {fptr[0], fptr[1], fptr[2], fptr[3]};
    fptr[0] = &Harl::debug;
    fptr[1] = &Harl::info;
    fptr[2] = &Harl::warning;
    fptr[3] = &Harl::error;
    for (int i = 0; i < 4; i++){
        if (level == arr[i])
            (this->*fptr[i])();
    }
}
