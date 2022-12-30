/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:17:57 by ataji             #+#    #+#             */
/*   Updated: 2022/12/30 22:05:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

Base* generate(){
    int r = rand() % 3;
    if (r == 0){
        return (new A);
    } else if (r == 1){
        return (new B);
    }else if (r == 2){
        return (new C);
    }
    return (NULL);
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "this is 'A'" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "this is 'B'" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "this is 'C'" << std::endl;
}

void identify(Base& p){
    try{
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "this is (A)" << std::endl;
    }catch (std::exception& e){
        try{
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "this is (B)" << std::endl;
        } catch (std::exception& e) {
            try{
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "this is (C)" << std::endl;
            } catch (std::exception& e) {
            }
        }
    }
}

Base::~Base(){
    std::cout << "destructor called" << std::endl;
}
