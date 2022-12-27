/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:43:38 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 12:35:14 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"

class Intern{
public:
    Intern();
    Intern(std::string name, std::string target);
    Intern(Intern& I);
    Intern& operator=(Intern& I);
    AForm* makeForm(std::string Name, std::string Target);
    AForm* ShrubberyCreation(std::string name, std::string target);
    AForm* RobotomyRequest(std::string name, std::string target);
    AForm* PresidentialPardon(std::string name, std::string target);
    class InvalidName : public std::exception{
    public:
        const char* what() const throw(){
            return "this name doesn't exist";
        }
    };
    ~Intern();
};

#endif
