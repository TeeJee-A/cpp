/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:29:52 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 00:40:37 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "AForm.hpp"

class AForm;

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
    int getGrade() const;
    class GradeTooHighException: public std::exception{
    public:
        const char* what() const throw(){
            return "Grade too high";
        }
    };
    class GradeTooLowException: public std::exception{
    public:
        const char* what() const throw(){
            return "Grade too low";
        }
    };
    void executeForm(AForm const & Aform);
    void signForm(AForm& Aform);
    void increment();
    void decrement();
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream& out, Bureaucrat &bureaucrat);

#endif
