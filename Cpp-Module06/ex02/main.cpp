/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:26:48 by ataji             #+#    #+#             */
/*   Updated: 2022/12/30 22:14:48 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

int main()
{
    Base    *b = NULL;
    A *a = dynamic_cast<A*>(b);
    (void)a;
    // srand(time(NULL));
    b = generate();
    std::cout << "Pointer test\n";
    identify(b);
    std::cout << "Refference test\n";
    identify(*b);
    delete b;
}
