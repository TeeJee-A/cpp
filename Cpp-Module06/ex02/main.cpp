/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:26:48 by ataji             #+#    #+#             */
/*   Updated: 2023/01/02 11:10:00 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

int main()
{
    Base    *b = NULL;
    A *a = dynamic_cast<A*>(b);
    (void)a;
    srand(time(NULL));
    b = generate();
    std::cout << "Pointer test\n";
    identify(b);
    std::cout << "Refference test\n";
    identify(*b);
    delete b;
}
