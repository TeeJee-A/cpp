/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 09:22:52 by ataji             #+#    #+#             */
/*   Updated: 2022/12/24 14:11:04 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& animal);
    Animal& operator=(const Animal& animal);
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

class Dog : public Animal{
public:
    Dog();
    Dog(const Dog& dog);
    Dog& operator=(const Dog& dog);
    std::string getType() const;
    void makeSound() const;
    ~Dog();
};

class Cat : public Animal{
public:
    Cat();
    Cat(const Cat& cat);
    Cat& operator=(const Cat& cat);
    std::string getType() const;
    void makeSound() const;
    ~Cat();
};

class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& wronganimal);
    WrongAnimal& operator=(const WrongAnimal& wronganimal);
    void makeSound() const;
    std::string getType() const;
    virtual ~WrongAnimal();
};

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(const WrongCat& wrongcat);
    WrongCat& operator=(const WrongCat& wrongcat);
    void makeSound() const;
    std::string getType() const;
    ~WrongCat();
};

#endif
