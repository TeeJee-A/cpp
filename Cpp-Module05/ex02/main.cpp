/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 12:05:48 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 15:23:16 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat _bureaucrat("Ghost", 150);
        ShrubberyCreationForm _shrubbery("File");
        _bureaucrat.executeForm(_shrubbery);
        _shrubbery.beSigned(_bureaucrat);
        _bureaucrat.signForm(_shrubbery);
        _bureaucrat.executeForm(_shrubbery);
        _shrubbery.execute(_bureaucrat);
        _bureaucrat.executeForm(_shrubbery);
    }
    catch (std::exception& e){
        std::cerr << "Error : " << e.what() << std::endl;
    }
    // std::cout << "--------------------------------\n";
    // {
    //     Bureaucrat _bureaucrat("president", 10);
    //     PresidentialPardonForm _autoRoute("autoroute");
    //     _bureaucrat.signForm(_autoRoute);
    //     _bureaucrat.executeForm(_autoRoute);
    // }
    // std::cout << "--------------------------------\n";
    // {
    //     Bureaucrat _bureaucrat("robotomy", 1);
    //     RobotomyRequestForm _robot("randomForm");
    //     _bureaucrat.signForm(_robot);
    //     _bureaucrat.executeForm(_robot);
    // }
}
