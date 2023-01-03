/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:33:56 by ataji             #+#    #+#             */
/*   Updated: 2023/01/03 20:04:37 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>

template <class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
public:
    MutantStack(){ std::cout << "default constaructor called" << std::endl; }
    MutantStack(MutantStack const& Mut){ *this = Mut; }
    MutantStack& operator=(MutantStack const& Mut){
        std::cout << "copy constructor called" << std::endl;
        this->c = Mut.c;
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    iterator begin(){ return (this->c.begin()); }
    iterator end(){ return (this->c.end()); }
    reverse_iterator rbegin(){ return (this->c.rbegin()); }
    reverse_iterator rend(){ return (this->c.rend()); }
    ~MutantStack(){ std::cout << "destructor called" << std::endl; }
};

#endif
