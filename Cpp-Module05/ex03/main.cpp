/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 12:05:48 by ataji             #+#    #+#             */
/*   Updated: 2022/12/27 13:50:13 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    // Bureaucrat _bureaucrat("Ghost", 10);
    // ShrubberyCreationForm _shrubbery("File");
    // _bureaucrat.executeForm(_shrubbery);
    // _bureaucrat.signForm(_shrubbery);
    // _bureaucrat.executeForm(_shrubbery);
    // std::cout << "--------------------------------\n";
    // {
    //     Bureaucrat _bureaucrat("president", 1);
    //     PresidentialPardonForm _autoRoute("autoroute");
    //     _bureaucrat.signForm(_autoRoute);
    //     _bureaucrat.executeForm(_autoRoute);
    // }
    // std::cout << "--------------------------------\n";
    // {
    //     Bureaucrat _bureaucrat("robotomy", 15);
    //     RobotomyRequestForm _robot("randomForm");
    //     _bureaucrat.signForm(_robot);
    //     _bureaucrat.executeForm(_robot);
    // }
    {
        Intern someRandomIntern;
        AForm* rrf;
        try{
            rrf = someRandomIntern.makeForm("shrucreation", "Bender");
            delete rrf;
        } catch(std::exception& e) {
            std::cout << "Error : " << e.what() << std::endl;
        }
    }
}
