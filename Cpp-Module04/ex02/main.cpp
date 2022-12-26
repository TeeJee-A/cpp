/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:59:09 by ataji             #+#    #+#             */
/*   Updated: 2022/12/24 14:52:07 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete i;
//     delete j;
//     return 0;
// }

int main(){
    for (int i = 0; i < 4; i++)
    {
        if (i % 2)
            Dog dog;
        else
            Cat cat;
    }
}

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// system("leaks PolyMorphism");
// (void)i;
// (void)j;
// // delete j;//should not create a leak
// // delete i;
// return 0;
// }
