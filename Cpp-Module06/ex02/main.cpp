/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:26:48 by ataji             #+#    #+#             */
/*   Updated: 2022/12/29 10:01:29 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

int main()
{
    Base    *b;

    srand(time(NULL));
    b = generate();
    std::cout << "Pointer test\n";
    identify(b);
    std::cout << "Refference test\n";
    identify(*b);
    delete b;
}
