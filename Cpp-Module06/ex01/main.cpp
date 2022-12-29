/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:57:59 by ataji             #+#    #+#             */
/*   Updated: 2022/12/28 19:10:18 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(){
    Data* ptr;
    Data* ptr2;
    uintptr_t raw;

    ptr = new Data();
    ptr->A = 10;
    ptr->T = "ayoub";
    raw = serialize(ptr);
    ptr2 = deserialize(raw);
    std::cout << "A: " << ptr2->A << std::endl;
    std::cout << "T: " << ptr2->T << std::endl;
}
