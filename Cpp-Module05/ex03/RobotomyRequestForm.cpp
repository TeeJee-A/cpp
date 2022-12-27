/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:21:51 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 23:51:14 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("no-Target", 72, 45){
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){
    std::cout << "RobotomyRequestForm parametrized constructor called" << std::endl;
    Target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& RrF){
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = RrF;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& RrF){
    (void)RrF;
    return (*this);
}

void RobotomyRequestForm::executer() const{
    std::cout << "Drilling Noises" << std::endl;
    for(int i = 0; i < 10; i++){
        if (i % 2 == 0)
            std::cout << Target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "the robotomy failed" << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}
