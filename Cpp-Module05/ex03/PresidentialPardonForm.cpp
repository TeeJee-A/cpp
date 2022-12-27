/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 23:45:30 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 23:51:03 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("no-Target", 25, 5){
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){
    std::cout << "PresidentialPardonForm parametrized constructor called" << std::endl;
    Target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& RpF){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = RpF;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& RpF){
    (void)RpF;
    return *this;
}

void PresidentialPardonForm::executer() const {
    std::cout << Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
