/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:15:13 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 23:04:41 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
private:
    const std::string Name;
    bool Signed;
    const int SignGrade;
    const int ExecGrade;
public:
    AForm();
    AForm(std::string name, int signgrade, int execgrade);
    AForm(const AForm& Aform);
    AForm& operator=(const AForm& Aform);
    class GradeTooHighException : public std::exception{
        const char* what() const throw(){
            return "Grade too High";
        }
    };
    class GradeTooLowException : public std::exception{
        const char* what() const throw(){
            return "Grade too Low";
        }
    };
    class NotSigned: public std::exception{
    public:
        const char* what() const throw(){
            return "the Form not signed";
        }
    };
    virtual void executer() const = 0;
    std::string getName() const;
    bool getSigned() const;
    int getSignGrade();
    int getExecGrade() const;
    void beSigned(Bureaucrat& Bur);
    void execute(Bureaucrat const & executor) const;
    virtual ~AForm();
};

std::ostream& operator<<(std::ostream& out, AForm& Aform);

#endif
