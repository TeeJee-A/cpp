/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:11:55 by ataji             #+#    #+#             */
/*   Updated: 2022/12/16 10:30:48 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void WriteToFile(std::string Fl, std::string JoinContent){
    std::ofstream OF;
    std::string NewFile;
    NewFile = Fl + ".replace";
    OF.open(NewFile);
    if (!OF)
        std::cout << "Error while creating file" << std::endl;
    else{
        OF << JoinContent;
        OF.close();
    }
}

void ReadFromFile(std::string Fl, std::string S1, std::string S2){
    std::ifstream IF;
    std::string Content;
    std::string JoinContent;
    size_t found = 0;
    IF.open(Fl);
    if (!IF)
        std::cout << "Error while openning a file" << std::endl;
    else{
        while (getline(IF, Content)){
            JoinContent += Content + "\n";
            found = JoinContent.find(S1, 0);
            if (found == std::string::npos){
                WriteToFile(Fl, JoinContent);
                continue;
            }
            if (S1.length() > 0){
                JoinContent.erase(found, S1.length());
                JoinContent.insert(found, S2);
            }
            WriteToFile(Fl, JoinContent);
        }
        IF.close();
    }
}
