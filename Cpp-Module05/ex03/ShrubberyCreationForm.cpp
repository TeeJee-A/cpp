/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:38:56 by ataji             #+#    #+#             */
/*   Updated: 2022/12/26 23:44:41 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ayoub", 145, 137){
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
    Target = "File";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ayoub", 145, 137){
    std::cout << "ShrubberyCreationForm parametrized constructor called" << std::endl;
    Target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& ScF){
    *this = ScF;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& ScF){
    if (this != &ScF){
        Target = ScF.Target;
    }
    return (*this);
}

void ShrubberyCreationForm::executer() const{
    std::ofstream OF;
    OF.open(Target + "_shrubbery");
    if (!OF)
        std::cerr << "Error while creating file" << std::endl;
    else{
        OF <<"                                              .\n"
           <<"                                   .         ;\n"
           <<"      .              .              ;%     ;;\n"   
           <<"        ,           ,                :;%  %;\n"
           <<"         :         ;                   :;%;'     .,\n"
           <<",.        %;     %;            ;        %;'    ,;\n"
           <<"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
           <<"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
           <<"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
           <<"     `%;.     ;%;     %;'         `;%%;.%;'\n"
           <<"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
           <<"         `:%;.  :;bd%;          %;@%;'\n"
           <<"           `@%:.  :;%.         ;@@%;'\n"   
           <<"             `@%.  `;@%.      ;@@%;\n"         
           <<"               `@%%. `@%%    ;@@%;\n"        
           <<"                 ;@%. :@%%  %@@%;\n"       
           <<"                   %@bd%%%bd%%:;\n"     
           <<"                     #@%%%%%:;;\n"
           <<"                     %@@%%%::;\n"
           <<"                     %@@@%(o);  . '\n"         
           <<"                     %@@@o%;:(.,'\n"         
           <<"                 `.. %@@@o%::;\n"         
           <<"                    `)@@@o%::;\n"         
           <<"                     %@@(o)::;\n"        
           <<"                    .%@@@@%::;\n"         
           <<"                    ;%@@@@%::;.\n"          
           <<"                   ;%@@@@%%:;;;.\n" 
           <<"               ...;%@@@@@%%:;;;;,..\n";
    }
    OF.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
