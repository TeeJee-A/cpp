/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:15:18 by ataji             #+#    #+#             */
/*   Updated: 2022/12/29 09:46:52 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REALTYPE_H
#define REALTYPE_H

#include <iostream>

class Base{
public:
    virtual ~Base();
};

class A : public Base {
    
};
class B : public Base {
    
};
class C : public Base {
    
};

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif
