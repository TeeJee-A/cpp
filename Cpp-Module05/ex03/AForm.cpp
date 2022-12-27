/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:11:36 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 23:30:36 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Name("ayoub"), SignGrade(24), ExecGrade(25){
    std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signgrade, int execgrade): Name(name), SignGrade(signgrade), ExecGrade(execgrade) {
    std::cout << "AForm parametrized constructor called" << std::endl;
    if (getSignGrade() < 1 || getExecGrade() < 1)
        throw GradeTooHighException();
    if (getSignGrade() > 150 || getExecGrade() > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& Aform) : Name(Aform.Name), SignGrade(Aform.SignGrade), ExecGrade(Aform.ExecGrade){
    *this = Aform;
}

AForm& AForm::operator=(const AForm& Aform) {
    (void)Aform;
    return (*this);
}

std::string AForm::getName() const{
    return (Name);
}

bool AForm::getSigned() const{
    return (Signed);
}

int AForm::getSignGrade(){
    return (SignGrade);
}

int AForm::getExecGrade() const{
    return (ExecGrade);
}

void AForm::beSigned(Bureaucrat& Bur){
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

void AForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() < 1)
        throw GradeTooHighException();
    if (executor.getGrade() > 150)
        throw GradeTooLowException();
    if (executor.getGrade() <= getExecGrade() && getSigned() == true){
        executer();
    }
    if (getSigned() == false)
        throw NotSigned();
    if (executor.getGrade() > getExecGrade())
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, AForm& Aform){
    out << "The Name of Bureaucrat : " << Aform.getName() << "\n";
    out << "The SignGrade of Bureaucrat : " << Aform.getSignGrade() << "\n";
    out << "The ExecGrade of Bureaucrat : " << Aform.getExecGrade() << "\n";
    out << "The indicat which show if signed or not : " << Aform.getSigned();
    return (out);
}

AForm::~AForm(){
    std::cout << "AForm destructor called" << std::endl;
}