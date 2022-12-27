/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:27:47 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 12:36:24 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(std::string name, std::string target){
    std::cout << "Intern parametrized constructor called" << std::endl;
    (void)name;
    (void)target;
}

Intern::Intern(Intern& I){
    std::cout << "Intern copy constructor called" << std::endl;
    *this = I;
}

Intern& Intern::operator=(Intern& I){
    (void)I;
    return *this;
}

AForm* Intern::ShrubberyCreation(std::string name, std::string target){
    ShrubberyCreationForm* ScF = new ShrubberyCreationForm(name);
    std::cout << "Intern creates " << name << ", " << target << std::endl;
    return ScF;
}

AForm* Intern::RobotomyRequest(std::string name, std::string target){
    RobotomyRequestForm* RrF = new RobotomyRequestForm(name);
    std::cout << "Intern creates " << name << ", " << target << std::endl;
    return RrF;
}

AForm* Intern::PresidentialPardon(std::string name, std::string target){
    PresidentialPardonForm* PpF = new PresidentialPardonForm(name);
    std::cout << "Intern creates " << name << ", " << target << std::endl;
    return PpF;
}

AForm* Intern::makeForm(std::string name, std::string target){
    std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*fptr[])(std::string, std::string) = {fptr[0], fptr[1], fptr[2]};
    fptr[0] = &Intern::ShrubberyCreation;
    fptr[1] = &Intern::RobotomyRequest;
    fptr[2] = &Intern::PresidentialPardon;
    for (int i = 0; i < 3; i++)
        if (name == arr[i])
            return (this->*fptr[i])(name, target);
    throw InvalidName();
}

Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}
