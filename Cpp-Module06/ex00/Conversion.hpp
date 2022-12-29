/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:58:00 by ataji             #+#    #+#             */
/*   Updated: 2022/12/28 16:53:04 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
#define CONVERSION_H

#include <iostream>
#include <string>
#include <climits>

class conversion{
public:
    conversion();
    conversion(conversion& con);
    conversion& operator=(conversion& con);
    void charCondition(std::string arg);
    void intCondition(std::string arg);
    void floatCondition(std::string arg);
    void doubleCondition(std::string arg);
    int checkSyntax(std::string arg, int i);
    int allNumber(std::string arg);
    class Impossible : public std::exception{
    public:
        const char* what() const throw(){
            return "Impossible";
        }
    };
    class nonDisplayable : public std::exception{
    public:
        const char* what() const throw(){
            return "Non displayable";
        }
    };
    class InvalidInput : public std::exception{
    public:
        const char* what() const throw(){
            return "Invalid Input";
        }
    };
    ~conversion();
};

#endif