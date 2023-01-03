/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:09:54 by ataji             #+#    #+#             */
/*   Updated: 2023/01/03 09:48:49 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::Span(){
}

Span::Span(unsigned int n) : N(n) {
}

Span::Span(const Span& span){ 
    *this = span;
}

Span & Span::operator = (const Span& span){
    if (this != &span)
        N = span.N;
    return *this;
}

void Span::addNumber(const int newNumber){
    std::vector<int>::iterator itVec;
    try{
        if (N == array.size())
            throw VectorisFull();
        itVec = array.begin();
        itVec = array.insert(itVec, newNumber);
    } catch (std::exception& e){
        throw VectorisFull();
    }
}

void Span::addNumberManytimes(size_t calls){
    try{
        if (N == array.size())
            throw VectorisFull();
        for (size_t i = 0; i < calls; i++){
            addNumber(i);
        }
    }catch (std::exception& e){
        throw VectorisFull();
    }
}

int Span::shortestSpan(){
    int *Result = new int[array.size()];
    int finalResult = 0;
    int i = 0;
    if (array.size() < 2)
        throw Elementexception();
    for (std::vector<int>::iterator itVec = array.begin(); itVec != array.end(); ++itVec){
        for (std::vector<int>::iterator itVec2 = array.begin() + 1; itVec2 != array.end(); ++itVec2){
            Result[i] = *itVec - *itVec2;
            if (Result[i] < 0)
                Result[i] *= -1;
            i++;
        }
    }
    for (std::vector<int>::iterator itVec3 = array.begin(); itVec3 != array.end(); ++itVec3){
        for (std::vector<int>::iterator itVec4 = itVec3 + 1; itVec4 != array.end(); ++itVec4){
            if (*itVec3 == *itVec4){
                return finalResult;
            }
        }
    }
    int prev;
    for (int n = 0; n < i; n++){
        int curr = Result[n + 1];
        if (Result[n] == 0){
            prev = Result[n];
            Result[n] = curr;
            curr = prev;
            i--;
        }
    }
    int min = Result[0];
    for (int j = 0; j < i; j++){
        if (Result[j] < min){
            min = Result[j];
        }
    }
    finalResult = min;
    return finalResult;
}

int Span::longestSpan(){
    int result = 0;
    if (array.size() < 2)
        throw Elementexception();
    std::vector<int>::iterator itVec;
    itVec = std::min_element(array.begin(), array.end());
    int smallest = *itVec;
    itVec = std::max_element(array.begin(), array.end());
    int biggest = *itVec;
    result = biggest - smallest;
    return result;
}

void Span::printArray(){
    if (array.size() < 2)
        throw Elementexception();
    for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it)
        std::cout << *it << std::endl;
}

Span::~Span(){
}
