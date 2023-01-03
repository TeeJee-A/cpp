/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:18:44 by ataji             #+#    #+#             */
/*   Updated: 2023/01/03 09:41:26 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main()
// {
//     Span sp = Span(1000);
//     try{
//         sp.addNumberManytimes(1000);
//         std::cout << sp.shortestSpan() << " : shortestSpan"  << std::endl;
//         std::cout << sp.longestSpan() << " : longestSpan" << std::endl;
//         sp.printArray();
//     } catch (std::exception& e){
//         std::cout << " Warning : " << e.what() << std::endl;
//     }
//     return 0;
// }
