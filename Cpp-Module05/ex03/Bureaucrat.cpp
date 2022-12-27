/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:19:44 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 00:40:12 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade){
    std::cout << "Bureaucrat parametrized constructor called" << std::endl;
    if (this->Grade < 1)
        throw GradeTooHighException();
    if (this->Grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& B) : Name(B.Name), Grade(B.Grade){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B){
    (void)B;
    return (*this);
}

void Bureaucrat::executeForm(AForm const& Aform){
    try{
        Aform.execute(*this);
        std::cout << getName() << " executed " << Aform.getName() << std::endl;
    } catch (std::exception& e){
        std::cerr << "cannot execute form because : " << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(AForm& Aform){
    try{
        Aform.beSigned(*this);
        if (Aform.getSigned() == true)
            std::cout << getName() << " signed " << Aform.getName() << std::endl;
    }catch(std::exception& e) {
        std::cout << getName() << " couldn't sign " << Aform.getName() << 
        " because : " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream& out, Bureaucrat& bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}

std::string Bureaucrat::getName(){
    return Name;
}

int Bureaucrat::getGrade() const{
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
    std::cout << "Bureaucrat destructor called" << std::endl;
}


