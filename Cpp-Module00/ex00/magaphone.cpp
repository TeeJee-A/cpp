#include <iostream>
#include <cctype>

int main(int ac, char **av){
    std::string myString;
    int j = 0;
    if (ac > 1){
        while (av[++j]){
            myString = av[j];
            int i = 0;
            while (myString[i]){
                myString[i] = toupper(myString[i]);
                std::cout << myString[i];
                i++;
            }
        }
        std::cout << std::endl;
    }else{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}