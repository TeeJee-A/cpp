/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:25:42 by ataji             #+#    #+#             */
/*   Updated: 2022/12/22 18:13:19 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//WrongAnimal's member function
WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    type = "no-Type";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wronganimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal){
    std::cout << "WrongAnimal copy assigment operator called" << std::endl;
    if (this != &wronganimal){
        this->type = wronganimal.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << type << " said GRRRR!!!" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (type);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Desctructor called" << std::endl;
}

//WrongCat's member function
WrongCat::WrongCat(){
    std::cout << "WrongCat Default constructro called" << std::endl;
    type = "Cat";
}

WrongCat::WrongCat(const WrongCat& wrongcat){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongcat;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongcat){
    std::cout << "WrongCat copy assigment operator called" << std::endl;
    if (this != &wrongcat){
        WrongAnimal::operator=(wrongcat);
    }
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << type << " said MEOW!!!" << std::endl;
}

std::string WrongCat::getType() const{
    return type;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}
