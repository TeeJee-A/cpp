/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:26:37 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 00:35:03 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade){
    std::cout << "parametrized constructor called" << std::endl;
    if (this->Grade < 1)
        throw GradeTooHighException();
    if (this->Grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& B) : Name(B.Name), Grade(B.Grade){
    std::cout << "copy constructor called" << std::endl;
    *this = B;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B){
    (void)B;
    return (*this);
}

std::ostream &operator<<(std::ostream& out, Bureaucrat& bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}

std::string Bureaucrat::getName(){
    return Name;
}

int Bureaucrat::getGrade(){
    return Grade;
}

void Bureaucrat::increment(){
    if (this->Grade < 1){
        throw GradeTooHighException();
    }
    this->Grade--;
    if (this->Grade < 1){
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrement(){
    if (this->Grade > 150){
        throw GradeTooLowException();
    }
    this->Grade++;
    if (this->Grade > 150){
        throw GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat(){
    std::cout << "desructor called" << std::endl;
}
