/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:59:09 by ataji             #+#    #+#             */
/*   Updated: 2022/12/24 14:44:38 by ataji            ###   ########.fr       */
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

// int main(){
//     // Animal animal[20];
//     for (int i = 0; i < 4; i++)
//     {
//         if (i % 2)
//             Dog dog;
//         else
//             Cat cat;
//     }
// }

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

int main()
{
    {
        Brain brain;

        std::string ideas[100] = {
                                "meowiing...",
                                "eating...",
                                "sleeping...",
                                "thinking....(WHY NOT?!)",
                                "scratching...",
                                "Getting upset for no reason...",
                                "sdjkhdsak",
                                "SseDjNunpK",
                                "YSWkdwjyIM",
                                "JEvDeIUjRs",
                                "GWFCKXQLVF",
                                "ESZHTEsLUm",
                                "ugbWVMwACy",
                                "UTQoxqEFUM"
                            };

    for (int i = 0; i < 14; i++){
        brain.setIdeas(i, ideas[i]);
    }

    Animal **animals = new Animal*[4];

    for (int i = 0; i < 4; i++){
        if (i < 2){
            animals[i] = new Dog;
        } else{
            animals[i] = new Cat;
        }
    }

    for (int i = 0; i < 4; i++){
        if (i == 0){
            std::cout << "-------------------DOG's SOUND--------------------"<< std::endl;
        }else if (i == 2) {
            std::cout << "-------------------CAT's SOUND--------------------"<< std::endl;
        }
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; i++)
        delete animals[i];
    }
    // {
    //     Animal* j = new Dog();
    //     const Animal* i = new Cat();
    //     delete j;//should not create a leak
    //     delete i;
    // }
    system("leaks Brain");
}
