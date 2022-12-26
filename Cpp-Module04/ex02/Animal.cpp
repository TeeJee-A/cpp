/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 09:26:24 by ataji             #+#    #+#             */
/*   Updated: 2022/12/23 10:04:15 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal's member function
Animal::Animal(){
    std::cout << "Animal Default constructor called" << std::endl;
    type = "no-Type";
}

Animal::Animal(const Animal& animal){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal){
    std::cout << "Animal copy assigment operator called" << std::endl;
    if (this != &animal){
        this->type = animal.type;
    }
    return (*this);
}

std::string Animal::getType() const {
    return (type);
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

//Dog's member function
Dog::Dog(){
    brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& dog){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog& dog){
    std::cout << "Dog copy assigment operator called" << std::endl;
    if (this != &dog){
        Animal::operator=(dog);
    }
    return (*this);
}

void Dog::makeSound() const{
    std::cout << type << " said BARK!!!" << std::endl;
}

std::string Dog::getType() const{
    return (type);
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

//Cat's member function
Cat::Cat(){
    brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& cat){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat& cat){
    std::cout << "Cat copy assigment operator called" << std::endl;
    if (this != &cat){
        Animal::operator=(cat);
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << type << " said MEOW!!!" << std::endl;
}

std::string Cat::getType() const{
    return (type);
}

Cat::~Cat(){
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}
