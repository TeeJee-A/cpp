 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:56:46 by ataji             #+#    #+#             */
/*   Updated: 2022/12/29 14:20:09 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void OutPutSpecialValues(int count)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    switch (count)
    {
    case 1:
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        break;
    case 2:
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        break;
    case 3:
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        break;
    case 4:
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        break;
    case 5:
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
        break;
    case 6:
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
        break;
    case 7:
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
        break;
    case 8:
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
        break;
    default:
        break;
    }
}

int checkSpecialValues(char *arg)
{
    int count = 0;
    char Check[] = "nan nanf -inf -inff +inf +inff inf inff";
    char *sp = strtok(Check, " ");
    while (sp != NULL)
    {
        count++;
        if (!strcmp(sp, arg))
        {
            OutPutSpecialValues(count);
            return 1;
        }
        sp = strtok(NULL, " ");
    }
    return 0;
}

int conversion::checkSyntax(std::string arg, int i)
{
    size_t count = 0;
    while (arg[i])
    {
        if (arg[0] == '.')
            throw InvalidInput();
        if ((arg[i] < 48 || arg[i] > 57) && arg[i + 1] && arg[i] != '.' && arg[0] != '-')
            throw InvalidInput();
        else if ((arg[i] >= 48 && arg[i] <= 57) || arg[i] == '.' || arg[0] == '-' || arg[i] == 'f')
        {
            count++;
            if (arg[i] == '.')
                checkSyntax(arg, i + 1);
            if (count == arg.length())
                return 1;
        }
        i++;
    }
    return (2);
}

void conversion::charCondition(std::string arg)
{
    int Input;
    if (checkSyntax(arg, 0) == 1)
    {
        try
        {
            Input = stoi(arg);
            if (Input < 0 || Input > 127)
                throw Impossible();
            if (!std::isprint(Input))
                throw nonDisplayable();
        }
        catch (std::exception &e)
        {
            if (Input < 0 || Input > 127)
                throw Impossible();
            if (!std::isprint(Input))
                throw nonDisplayable();
        }
        std::cout << "char: '" << static_cast<char>(Input) << "'" << std::endl;
    }else if (arg.length() == 1){
        char c = arg[0];
        std::cout << "char: '" << c << "'" << std::endl;
    }else{
        throw nonDisplayable();
    }
}

void conversion::intCondition(std::string arg)
{
    int Input;
    try
    {
        Input = static_cast<int>(arg[0]);
        if (checkSyntax(arg, 0) == 1)
            Input = stoi(arg);
        if (Input >= INT_MAX || Input <= INT_MIN)
            throw Impossible();
    }
    catch (std::exception &e)
    {
        throw Impossible();
    }
    std::cout << "int: " << Input << std::endl;
}

int conversion::allNumber(std::string arg){
    int i = 0;
    while (arg[i])
        i++;
    return i;
}

void conversion::floatCondition(std::string arg){
    float Input;
    char Float[arg.length()];
    int check = 0;
    strcpy(Float, arg.c_str());
    try{
        Input = static_cast<float>(arg[0]);
        if (checkSyntax(arg, 0) == 1){
            Input = strtof(Float, NULL);
            if (allNumber(arg) > 0){
                std::cout << "float: " << Input << ".0f" << std::endl;
                return ;
            }
            check = 1;
        }
        if (check == 1)
            std::cout << "float: " << Input << "f" << std::endl;
        else
            std::cout << "float: " << Input << ".0f" << std::endl;
    }catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

void conversion::doubleCondition(std::string arg)
{
    double Input;
    char Double[arg.length()];
    int check = 0;
    strcpy(Double, arg.c_str());
    try
    {
        Input = static_cast<double>(arg[0]);
        if (checkSyntax(arg, 0) == 1){
            Input = strtod(Double, NULL);
            if (allNumber(arg) > 0){
                std::cout << "double: " << Input << ".0" << std::endl;
                return ;
            }
            check = 1;
        }
        if (check == 1)
            std::cout << "double: " << Input << std::endl;
        else
            std::cout << "double: " << Input << ".0" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main(int ac, char **av)
{
    conversion con;
    if (ac != 2)
    {
        std::cerr << "insert two arguments" << std::endl;
        return (0);
    }
    std::string arg = av[1];
    if (checkSpecialValues(av[1]))
        return 1;
    try{
        con.checkSyntax(arg, 0);
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
        exit(1);
    }try{
        con.charCondition(arg);
    }catch (std::exception &e){
        std::cout << "char: " << e.what() << std::endl;
    }try{
        con.intCondition(arg);
    }catch (std::exception &e){
        std::cout << "int: " << e.what() << std::endl;
    }
    con.floatCondition(arg);
    con.doubleCondition(arg);
}
