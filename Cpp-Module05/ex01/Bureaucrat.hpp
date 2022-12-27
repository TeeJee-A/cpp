/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:14:25 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 23:57:56 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
private:
    const std::string Name;
    int Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& B);
    Bureaucrat& operator=(const Bureaucrat& B);
    std::string getName();
    int getGrade();
    class GradeTooHighException: public std::exception{
    public:
        const char* what() const throw(){
            return "Grade too high exception";
        }
    };
    class GradeTooLowException: public std::exception{
    public:
        const char* what() const throw(){
            return "Grade too low exception";
        }
    };
    void signForm(Form& form);
    void increment();
    void decrement();
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream& out, Bureaucrat &bureaucrat);

#endif
