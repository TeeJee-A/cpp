/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:32:49 by ataji             #+#    #+#             */
/*   Updated: 2022/12/28 13:53:08 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

conversion::conversion(){
}

conversion::conversion(conversion& con){   
    (void)con;
}

conversion& conversion::operator=(conversion& con){
    (void)con;
    return (*this);
}

conversion::~conversion(){
}