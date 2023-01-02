/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:18:44 by ataji             #+#    #+#             */
/*   Updated: 2023/01/02 11:27:22 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(1000);
    try{
        sp.addNumberManytimes(1000);
        std::cout << sp.shortestSpan() << " : shortestSpan"  << std::endl;
        std::cout << sp.longestSpan() << " : longestSpan" << std::endl;
        sp.printArray();
        // while (1);
    } catch (std::exception& e){
        std::cout << " Warning : " << e.what() << std::endl;
    }
    return 0;
}
