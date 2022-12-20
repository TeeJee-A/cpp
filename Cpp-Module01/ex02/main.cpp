/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:02:19 by ataji             #+#    #+#             */
/*   Updated: 2022/12/13 21:17:17 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(){
    std::string String = "HI THIS IS BRAIN";
    std::string* StringPTR = &String;
    std::string& StringREF = String;

    std::cout << "• The memory address of the string variable: " << &String << std::endl;
    std::cout << "• The memory address held by stringPTR: " << &StringPTR << std::endl;
    std::cout << "• The memory address held by stringREF: " << &StringREF << std::endl;
    std::cout << "• The value of the string variable: " << String << std::endl;
    std::cout << "• The value pointed to by stringPTR: " << *StringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF: " << StringREF << std::endl;
}
