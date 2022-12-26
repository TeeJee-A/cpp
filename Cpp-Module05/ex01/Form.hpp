/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:39:01 by ataji             #+#    #+#             */
/*   Updated: 2022/12/25 18:20:56 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
    const std::string Name;
    bool Signed;
    const int SignGrade;
    const int ExecGrade;
public:
    Form();
    Form(std::string name, int signgrade, int execgrade);
    Form(const Form& form);
    Form& operator=(const Form& form);
    class GradeTooHighException : public std::exception{
        const char* what() const throw(){
            return "Grade too High exception";
        }
    };
    class GradeTooLowException : public std::exception{
        const char* what() const throw(){
            return "Grade too Low exception";
        }
    };
    std::string getName();
    bool getSigned();
    int getSignGrade();
    int getExecGrade();
    void beSigned(Bureaucrat Bur);
    ~Form();
};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif
