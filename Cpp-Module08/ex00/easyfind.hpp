/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:03:35 by ataji             #+#    #+#             */
/*   Updated: 2022/12/31 14:04:57 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>

class NotFound : public std::exception{
public:
    const char* what() const throw(){
        return "Element not found";
    }
};

template <typename T> void easyfind(T firstOne, int Integer){
    try{
        std::vector<int>::iterator itVec = std::find(firstOne.begin(), firstOne.end(), Integer);
        if (itVec == firstOne.end())
            throw NotFound();
        else
            std::cout << "Element found" << std::endl;
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

#endif
