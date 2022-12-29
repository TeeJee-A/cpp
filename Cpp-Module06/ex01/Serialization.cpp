/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:05:10 by ataji             #+#    #+#             */
/*   Updated: 2022/12/28 18:57:10 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr){
    uintptr_t AT = reinterpret_cast<uintptr_t>(ptr);
    return AT;
}

Data* deserialize(uintptr_t raw){
    Data* AT = reinterpret_cast<Data*>(raw);
    return AT;
}
