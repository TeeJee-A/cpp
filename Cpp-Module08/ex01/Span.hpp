/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:06:40 by ataji             #+#    #+#             */
/*   Updated: 2023/01/02 11:14:12 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
private:
    unsigned int N;
    std::vector<int> array;
public:
    Span();
    Span(unsigned int n);
    Span(const Span& span);
    Span& operator=(const Span& span);
    class VectorisFull : public std::exception{
    public:
        const char* what() const throw(){
            return "the vector is full";
        }
    };
    class Elementexception : public std::exception{
    public:
        const char* what() const throw(){
            return "the elements that stored are not enough";
        }
    };
    void addNumber(const int newNumber);
    void addNumberManytimes(size_t calls);
    int shortestSpan();
    int longestSpan();
    void printArray();
    ~Span();
};

#endif
