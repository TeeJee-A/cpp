/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:44:48 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 00:38:39 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("ayoub"), SignGrade(24), ExecGrade(25){
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int signgrade, int execgrade): Name(name), SignGrade(signgrade), ExecGrade(execgrade) {
    std::cout << "Form parametrized constructor called" << std::endl;
    if (this->SignGrade < 1 || this->ExecGrade < 1)
        throw GradeTooHighException();
    if (this->ExecGrade > 150 || this->SignGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& form) : Name(form.Name), SignGrade(form.SignGrade), ExecGrade(form.ExecGrade){
    *this = form;
}

Form& Form::operator=(const Form& form) {
    (void)form;
    return (*this);
}

std::string Form::getName(){
    return (Name);
}

bool Form::getSigned(){
    return (Signed);
}

int Form::getSignGrade(){
    return (SignGrade);
}

int Form::getExecGrade(){
    return (ExecGrade);
}

void Form::beSigned(Bureaucrat Bur){
    if (Bur.getGrade() < 1)
        throw GradeTooHighException();
    if (Bur.getGrade() > 150)
        throw GradeTooLowException();
    if (Bur.getGrade() <= getSignGrade()){
        this->Signed = true;
    } else {
        this->Signed = false;
    }
    if (getSigned() == false)
        throw NotSigned();
}

std::ostream& operator<<(std::ostream& out, Form& form){
    out << "The Name of Bureaucrat : " << form.getName() << "\n";
    out << "The SignGrade of Bureaucrat : " << form.getSignGrade() << "\n";
    out << "The ExecGrade of Bureaucrat : " << form.getExecGrade() << "\n";
    out << "The indicat which show if signed or not : " << form.getSigned();
    return (out);
}

Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}
